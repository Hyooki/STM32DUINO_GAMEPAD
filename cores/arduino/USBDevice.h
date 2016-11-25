#ifndef _USB_H_INCLUDED
#define _USB_H_INCLUDED

#include "Arduino.h"

class USBDeviceClass {
    public:
        void reenumerate();
        void beginHID();
};

extern USBDeviceClass USBDevice;

#endif
