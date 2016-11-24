#include "USBDevice.h"

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

USBDeviceClass USBDevice;
