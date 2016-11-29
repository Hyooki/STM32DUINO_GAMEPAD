#ifndef _USB_H_INCLUDED
#define _USB_H_INCLUDED

#include "Arduino.h"

class HIDDevice {
    public:
        void attachUSB(USBD_HandleTypeDef *usbDevice, uint8_t HIDReportID);
        
        uint8_t HIDReportID;
        USBD_HandleTypeDef *usbDevice;
};


class USBDeviceClass {
    public:
        void reenumerate();
        void beginHID(HIDDevice *hidDevice1, HIDDevice *hidDevice2 = NULL);
        void beginSerialHID(HIDDevice *hidDevice1, HIDDevice *hidDevice2 = NULL);
};

extern USBDeviceClass USBDevice;

#endif
