#ifndef __PS2_H__
#define __PS2_H__

#include <rtthread.h>
#include <rtdevice.h>
#include <command.h>

// PIN
#define PS2_DEFAULT_CS_PIN          28 // GET_PIN(B, 12)
#define PS2_DEFAULT_CLK_PIN         29 // GET_PIN(B, 13)
#define PS2_DEFAULT_DO_PIN          31 // GET_PIN(B, 15)
#define PS2_DEFAULT_DI_PIN          30 // GET_PIN(B, 14)

// COMMAND
#define PS2_CMD_VIBRATE     1

// MODE
#define PS2_NO_MODE         0
#define PS2_GREEN_MODE      0x41
#define PS2_RED_MODE        0x73

// KEY
#define PS2_BTN_SELECT      (1 << 0)
#define PS2_BTN_L3          (1 << 1)
#define PS2_BTN_R3          (1 << 2)
#define PS2_BTN_START       (1 << 3)
#define PS2_BTN_UP          (1 << 4)
#define PS2_BTN_RIGHT       (1 << 5)
#define PS2_BTN_DOWN        (1 << 6)
#define PS2_BTN_LEFT        (1 << 7)
#define PS2_BTN_L2          (1 << 8)
#define PS2_BTN_R2          (1 << 9)
#define PS2_BTN_L1          (1 << 10)
#define PS2_BTN_R1          (1 << 11)
#define PS2_BTN_TRIANGLE    (1 << 12)
#define PS2_BTN_CICLE       (1 << 13)
#define PS2_BTN_FORK        (1 << 14)
#define PS2_BTN_SQUARE      (1 << 15)

#define PS2_ROCKER_LX       (9)
#define PS2_ROCKER_LY       (10)
#define PS2_ROCKER_RX       (11)
#define PS2_ROCKER_RY       (12)

typedef struct ps2_ctrl_data *ps2_ctrl_data_t;
typedef struct ps2           *ps2_t;

struct ps2_ctrl_data
{
    uint16_t button;        // 16
    uint8_t left_stick_x;
    uint8_t left_stick_y;
    uint8_t right_stick_x;
    uint8_t right_stick_y;
};

void ps2_init(void);
int  ps2_scan(ps2_ctrl_data_t pt);
int  ps2_read_light(void);

#endif
