// Copyright 2022 Daniel Coady (@pondodev)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Feature disable options
 *  These options are also useful to firmware size reduction.
 */

#include "config_common.h"

#define MATRIX_ROWS 5
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS { B4, C3, C4, D7, C2 }
#define MATRIX_COL_PINS { C5, C6, C7, A7, A6, A5, A4, A3, A2, A1, A0, D0 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

#define ENCODERS_PAD_A { B2 }
#define ENCODERS_PAD_B { B3 }

#define UNUSED_PINS { D1, D2 }

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

