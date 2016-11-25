#include "USBDevice.h"
#include "usbd_hid.h"

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
    
    USBD_Init(&hUsbDeviceFS, &FS_Desc, DEVICE_FS);
    USBD_RegisterClass(&hUsbDeviceFS, &USBD_HID);
    USBD_Start(&hUsbDeviceFS);
}

USBDeviceClass USBDevice;
