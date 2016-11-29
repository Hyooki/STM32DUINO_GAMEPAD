#include "Mouse.h"

void MouseClass::setButton(bool set, uint8_t button) {
    if (set) {
        press(button); 
    } else {
        release(button);
    }
}

void MouseClass::click(uint8_t button) {
    press(button);
    release(button);
}

void MouseClass::press(uint8_t button) {
    setButtonState(buttonState | button);
}

void MouseClass::release(uint8_t button) {
    setButtonState(button & ~button);
}

void MouseClass::setButtonState(uint8_t newButtonState) {
    if (newButtonState != buttonState) {
        buttonState = newButtonState;
        sendReport(buttonState, 0, 0, 0);
    }
}

void MouseClass::move(int8_t x, int8_t y, int8_t wheel) {
    sendReport(buttonState, x, y, wheel);
}

void MouseClass::sendReport(uint8_t buttonState, int8_t x, int8_t y, int8_t wheel) {
    uint8_t report[5];
    report[0] = HIDReportID;
    report[1] = buttonState;
    report[2] = x;
    report[3] = y;
    report[4] = wheel;
    
    int timeout_millis = HID_FS_BINTERVAL;
    while (USBD_HID_SendReport(usbDevice, report, sizeof(report)) != USBD_OK && timeout_millis > 0) {
        delay(1);
        timeout_millis--;
    }
}


bool MouseClass::isPressed(uint8_t button) {
    return buttonState & button;
}

MouseClass Mouse;
