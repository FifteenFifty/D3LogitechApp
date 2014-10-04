#pragma once

// LCD device state
typedef struct LCD_DEVICE_STATE
{
    int nDeviceId;
    DWORD dwButtonState;

}LCD_DEVICE_STATE;

// Applet state
typedef struct APPLET_STATE
{
    LCD_DEVICE_STATE Color;
    LCD_DEVICE_STATE Mono;
    BOOL isEnabled;

}APPLET_STATE;
