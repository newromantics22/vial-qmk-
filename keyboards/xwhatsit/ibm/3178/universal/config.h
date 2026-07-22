/* ==========================================================================
   1. 컨트롤러 타겟 설정 (SMD / wcass 전용)
   ========================================================================== */
#define CONTROLLER_IS_XWHATSIT_MODEL_F_OR_WCASS_MODEL_F
//#define CONTROLLER_IS_XWHATSIT_BEAMSPRING_REV_4
//#define CONTROLLER_IS_THROUGH_HOLE_BEAMSPRING
//#define CONTROLLER_IS_THROUGH_HOLE_MODEL_F

/* ==========================================================================
   2. 정전용량(Capsense) 타이밍 및 자동 보정 활성화
   ========================================================================== */
#define CAPSENSE_KEYBOARD_SETTLE_TIME_US 8
#define CAPSENSE_DAC_SETTLE_TIME_US 8
#define CAPSENSE_HARDCODED_SAMPLE_TIME 3

// 부팅 시 자동 캘리브레이션을 켜서 1, 3, 5, 7 연타 폭주를 방지합니다.
#define CAPSENSE_CAL_ENABLED 1
#define CAPSENSE_CAL_DEBUG 1
#define CAPSENSE_CAL_INIT_REPS 16
#define CAPSENSE_CAL_EACHKEY_REPS 16
#define CAPSENSE_CAL_BINS 5
#define CAPSENSE_CAL_THRESHOLD_OFFSET 96

#if !CAPSENSE_CAL_ENABLED
#define CAPSENSE_HARDCODED_THRESHOLD 140  // 255에서 정상 범위(140)로 수정
#endif

#define CAPSENSE_KEYMAP_COL_TO_PHYSICAL_COL(col) (4+(col))

/* ==========================================================================
   3. 솔레노이드 / 햅틱 핀 비활성화 (DAC / Shift Register 핀 충돌 방지)
   ========================================================================== */
// D2, D3 핀 충돌을 막기 위해 솔레노이드 핀 정의를 주석 처리합니다.
//#define HAPTIC_ENABLE_PIN D3
//#define SOLENOID_PIN D2

#define HAPTIC_OFF_IN_LOW_POWER 1
#define SOLENOID_DEFAULT_DWELL 4
#define SOLENOID_MIN_DWELL 4
#define NO_HAPTIC_MOD

/* ==========================================================================
   4. LED 핀 설정 (SMD 전용)
   ========================================================================== */
#define LED_NUM_LOCK_PIN D7
#define LED_CAPS_LOCK_PIN E6
#define LED_SCROLL_LOCK_PIN B6

#include "../../../post_config.h"
