// Copyright 2022 Daniel Coady (@pondodev)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

#define LAYOUT_plondo( \
                                                           k0B, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B  \
) \
{ \
    {                                                        k0B }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B }, \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B }  \
}

#define LAYOUT LAYOUT_plondo

#define LED_IND1 D4
#define LED_IND2 D5
#define LED_IND3 D6

