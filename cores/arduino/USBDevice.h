#ifndef _USB_H_INCLUDED
#define _USB_H_INCLUDED

#include "Arduino.h"

class USBDeviceClass {
    public:
        void reenumerate();
};

extern USBDeviceClass USBDevice;

#endif
