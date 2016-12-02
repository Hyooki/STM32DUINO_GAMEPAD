#include "USBDevice.h"
#include "usbd_hid.h"
#include "usbd_composite.h"
#include "usb_descriptors.h"

void HIDDevice::attachUSB(USBD_HandleTypeDef *usbDevice, uint8_t HIDReportID) {
    this->usbDevice = usbDevice;
    this->HIDReportID = HIDReportID;
}

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

void USBDeviceClass::beginHID(HIDDevice *hidDevice1, HIDDevice *hidDevice2) {
    reenumerate();
    
    USBD_Init(&hUsbDeviceFS, &FS_Desc_Without_Driver, DEVICE_FS);
    USBD_RegisterClass(&hUsbDeviceFS, &USBD_HID);
    USBD_Start(&hUsbDeviceFS);
    
    hidDevice1->attachUSB(&hUsbDeviceFS, 1);
    if (hidDevice2 != NULL) {
        hidDevice2->attachUSB(&hUsbDeviceFS, 2);
    }
};

void USBDeviceClass::beginSerialHID(HIDDevice *hidDevice1, HIDDevice *hidDevice2) {
    USBD_Composite_Set_Descriptor(COMPOSITE_CDC_HID_DESCRIPTOR, COMPOSITE_CDC_HID_DESCRIPTOR_SIZE);
    
    USBD_Composite_Set_Classes(&USBD_CDC, &USBD_HID);
    
    USBD_MAX_NUM_INTERFACES = 2 /*2 CDC interface*/ + 1 /*1 HID interface*/;
    
    interface_to_class[2] = 1; //HID interface to HID class
    in_endpoint_to_class[HID_EPIN_ADDR & 0x7F] = 1; // HID endpoint to HID class
    
    reenumerate();
    USBD_Init(&hUsbDeviceFS, &FS_Desc_CDC_Interface_0, DEVICE_FS);
    USBD_RegisterClass(&hUsbDeviceFS, &USBD_Composite);
    USBD_CDC_RegisterInterface(&hUsbDeviceFS, &USBD_Interface_fops_FS);
    USBD_Start(&hUsbDeviceFS);
    
    hidDevice1->attachUSB(&hUsbDeviceFS, 1);
    if (hidDevice2 != NULL) {
        hidDevice2->attachUSB(&hUsbDeviceFS, 2);
    }
};

USBDeviceClass USBDevice;
