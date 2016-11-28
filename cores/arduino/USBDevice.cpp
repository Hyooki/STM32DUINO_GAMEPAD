#include "USBDevice.h"
#include "usbd_hid.h"
#include "usbd_composite.h"
#include "usb_descriptors.h"

void USBDeviceClass::reenumerate() {
    volatile unsigned int i;
    
#ifdef USB_DISC_PIN
    pinMode(USB_DISC_PIN, OUTPUT);
    digitalWrite(USB_DISC_PIN, HIGH);
    for(i=0;i<512;i++);
    digitalWrite(USB_DISC_PIN, LOW);
#else
    digital_io_init(GPIOA, GPIO_PIN_12, GPIO_MODE_OUTPUT_PP, GPIO_NOPULL);
    digital_io_write(GPIOA, GPIO_PIN_12, GPIO_PIN_RESET);
    for(i=0;i<512;i++){};
    digital_io_write(GPIOA, GPIO_PIN_12, GPIO_PIN_SET);
    for(i=0;i<512;i++){};
#endif

};

void USBDeviceClass::beginHID() {
    reenumerate();
    
    USBD_Init(&hUsbDeviceFS, &FS_Desc_Without_Driver, DEVICE_FS);
    USBD_RegisterClass(&hUsbDeviceFS, &USBD_HID);
    USBD_Start(&hUsbDeviceFS);
};

void USBDeviceClass::beginSerialHID() {
    USBD_Composite_Set_Descriptor(COMPOSITE_CDC_HID_DESCRIPTOR, COMPOSITE_CDC_HID_DESCRIPTOR_SIZE);
    
    USBD_Composite_Set_Classes(&USBD_CDC, &USBD_HID);
    
    in_endpoint_to_class[HID_EPIN_ADDR & 0x7F] = 1;
    
    reenumerate();
    USBD_Init(&hUsbDeviceFS, &FS_Desc_CDC_Interface_0, DEVICE_FS);
    USBD_RegisterClass(&hUsbDeviceFS, &USBD_Composite);
    USBD_CDC_RegisterInterface(&hUsbDeviceFS, &USBD_Interface_fops_FS);
    USBD_Start(&hUsbDeviceFS);
};

USBDeviceClass USBDevice;
