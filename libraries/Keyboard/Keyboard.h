#ifndef KEYBOARD_h
#define KEYBOARD_h

#include "USBDevice.h"
#include "usbd_hid.h"

class KeyboardClass: public HIDDevice {
    public:
        void test();
        
        virtual uint8_t *getReportDescriptor();
        virtual uint16_t getReportDescriptorSize();
};

extern KeyboardClass Keyboard;

#endif
