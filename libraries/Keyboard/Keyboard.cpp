#include "Keyboard.h"

__ALIGN_BEGIN static uint8_t HID_KEYBOARD_ReportDesc[]  __ALIGN_END = {
0x05, 0x01,  // USAGE_PAGE (Generic Desktop)
0x09, 0x06,  // USAGE (Keyboard)
0xa1, 0x01,  // COLLECTION (Application)
0x85, 0x02,  //   REPORT_ID (2)
0x05, 0x07,  //   USAGE_PAGE (Keyboard)

0x19, 0xe0,  //   USAGE_MINIMUM (Keyboard LeftControl)
0x29, 0xe7,  //   USAGE_MAXIMUM (Keyboard Right GUI)
0x15, 0x00,  //   LOGICAL_MINIMUM (0)
0x25, 0x01,  //   LOGICAL_MAXIMUM (1)
0x75, 0x01,  //   REPORT_SIZE (1)

0x95, 0x08,  //   REPORT_COUNT (8)
0x81, 0x02,  //   INPUT (Data,Var,Abs)
0x95, 0x01,  //   REPORT_COUNT (1)
0x75, 0x08,  //   REPORT_SIZE (8)
0x81, 0x03,  //   INPUT (Cnst,Var,Abs)

0x95, 0x06,  //   REPORT_COUNT (6)
0x75, 0x08,  //   REPORT_SIZE (8)
0x15, 0x00,  //   LOGICAL_MINIMUM (0)
0x25, 0x65,  //   LOGICAL_MAXIMUM (101)
0x05, 0x07,  //   USAGE_PAGE (Keyboard)

0x19, 0x00,  //   USAGE_MINIMUM (Reserved (no event indicated))
0x29, 0x65,  //   USAGE_MAXIMUM (Keyboard Application)
0x81, 0x00,  //   INPUT (Data,Ary,Abs)
0xc0,        // END_COLLECTION
};

uint8_t *KeyboardClass::getReportDescriptor() {
    return HID_KEYBOARD_ReportDesc;
}

uint16_t KeyboardClass::getReportDescriptorSize() {
    return sizeof(HID_KEYBOARD_ReportDesc);
}
        
void KeyboardClass::test() {
    uint8_t report[9];
    report[0] = HIDReportID;
    
    report[1] = 0; // modifiers
    report[2] = 0; // reserved
    report[3] = 4; // key a
    report[4] = 0; // no key
    report[5] = 0; // no key
    report[6] = 0; // no key
    report[7] = 0; // no key
    report[8] = 0; // no key
    
    int timeout_millis = HID_FS_BINTERVAL;
    while (USBD_HID_SendReport(usbDevice, report, sizeof(report)) != USBD_OK && timeout_millis > 0) {
        delay(1);
        timeout_millis--;
    }
    
    report[3] = 0;
    
    timeout_millis = HID_FS_BINTERVAL;
    while (USBD_HID_SendReport(usbDevice, report, sizeof(report)) != USBD_OK && timeout_millis > 0) {
        delay(1);
        timeout_millis--;
    }
}

KeyboardClass Keyboard;
