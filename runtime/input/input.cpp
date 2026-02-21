#include "input.h"
#include <cstdio>
#include <cstring>

#ifdef REO_PLATFORM_WINDOWS
#include <windows.h>
#include <xinput.h>
#pragma comment(lib, "xinput.lib")
#endif

namespace reo {

bool Input::init() {
    m_pads[0].reset();
    m_pads[1].reset();

#ifdef REO_PLATFORM_WINDOWS
    // Check for connected XInput controllers
    for (int i = 0; i < 2; i++) {
        XINPUT_STATE state;
        memset(&state, 0, sizeof(state));
        m_xinput_connected[i] = (XInputGetState(i, &state) == ERROR_SUCCESS);
        if (m_xinput_connected[i]) {
            printf("[INPUT] XInput controller %d connected\n", i);
        }
    }
#endif

    printf("[INPUT] Initialized (XInput + keyboard)\n");
    return true;
}

void Input::shutdown() {
    printf("[INPUT] Shutdown\n");
}

void Input::update() {
#ifdef REO_PLATFORM_WINDOWS
    for (int i = 0; i < 2; i++) {
        if (m_xinput_connected[i]) {
            update_xinput(i);
        }
    }
#endif
    update_keyboard();
}

#ifdef REO_PLATFORM_WINDOWS
void Input::update_xinput(int port) {
    XINPUT_STATE state;
    memset(&state, 0, sizeof(state));

    if (XInputGetState(port, &state) != ERROR_SUCCESS) {
        m_xinput_connected[port] = false;
        return;
    }

    auto& pad = m_pads[port];
    uint16_t buttons = 0xFFFF; // All released

    WORD xb = state.Gamepad.wButtons;

    // Map XInput buttons → PS2 buttons
    if (xb & XINPUT_GAMEPAD_BACK)           buttons &= ~PS2_SELECT;
    if (xb & XINPUT_GAMEPAD_LEFT_THUMB)     buttons &= ~PS2_L3;
    if (xb & XINPUT_GAMEPAD_RIGHT_THUMB)    buttons &= ~PS2_R3;
    if (xb & XINPUT_GAMEPAD_START)          buttons &= ~PS2_START;
    if (xb & XINPUT_GAMEPAD_DPAD_UP)        buttons &= ~PS2_UP;
    if (xb & XINPUT_GAMEPAD_DPAD_RIGHT)     buttons &= ~PS2_RIGHT;
    if (xb & XINPUT_GAMEPAD_DPAD_DOWN)      buttons &= ~PS2_DOWN;
    if (xb & XINPUT_GAMEPAD_DPAD_LEFT)      buttons &= ~PS2_LEFT;
    if (xb & XINPUT_GAMEPAD_LEFT_SHOULDER)  buttons &= ~PS2_L1;
    if (xb & XINPUT_GAMEPAD_RIGHT_SHOULDER) buttons &= ~PS2_R1;
    if (xb & XINPUT_GAMEPAD_Y)              buttons &= ~PS2_TRIANGLE;
    if (xb & XINPUT_GAMEPAD_B)              buttons &= ~PS2_CIRCLE;
    if (xb & XINPUT_GAMEPAD_A)              buttons &= ~PS2_CROSS;
    if (xb & XINPUT_GAMEPAD_X)              buttons &= ~PS2_SQUARE;

    // Analog triggers → L2/R2
    if (state.Gamepad.bLeftTrigger > 30) {
        buttons &= ~PS2_L2;
        pad.pressure[10] = state.Gamepad.bLeftTrigger;
    } else {
        pad.pressure[10] = 0;
    }

    if (state.Gamepad.bRightTrigger > 30) {
        buttons &= ~PS2_R2;
        pad.pressure[11] = state.Gamepad.bRightTrigger;
    } else {
        pad.pressure[11] = 0;
    }

    pad.buttons = buttons;

    // Analog sticks (XInput: -32768 to 32767) → PS2 (0-255, 128=center)
    pad.left_x  = (uint8_t)((state.Gamepad.sThumbLX + 32768) >> 8);
    pad.left_y  = (uint8_t)(255 - ((state.Gamepad.sThumbLY + 32768) >> 8)); // Inverted Y
    pad.right_x = (uint8_t)((state.Gamepad.sThumbRX + 32768) >> 8);
    pad.right_y = (uint8_t)(255 - ((state.Gamepad.sThumbRY + 32768) >> 8));
}
#endif

void Input::update_keyboard() {
    // TODO: Keyboard input via GetAsyncKeyState or window messages
    // Default mapping:
    //   WASD → Left stick / D-pad
    //   Arrow keys → Right stick
    //   Space → Cross, E → Circle, Q → Square, R → Triangle
    //   1 → L1, 2 → R1, 3 → L2, 4 → R2
    //   Enter → Start, Backspace → Select
}

} // namespace reo
