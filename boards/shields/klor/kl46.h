        RC(0,1) RC(0,2) RC(0,3) RC(0,4) RC(0,5)                 RC(0,6) RC(0,7) RC(0,8) RC(0,9) RC(0,10)
RC(1,0) RC(1,1) RC(1,2) RC(1,3) RC(1,4) RC(1,5)                 RC(1,6) RC(1,7) RC(1,8) RC(1,9) RC(1,10) RC(1,11)
RC(2,0) RC(2,1) RC(2,2) RC(2,3) RC(2,4) RC(2,5) RC(3,5) RC(3,6) RC(2,6) RC(2,7) RC(2,8) RC(2,9) RC(2,10) RC(2,11)
                        RC(3,1) RC(3,2) RC(3,3) RC(3,4) RC(3,7) RC(3,8) RC(3,9) RC(3,10)


/*                                      42 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────┬────────────────────────╮ ╭─────────────────────────┬─────────────────────────╮
  │  0   1   2   3   4   5 │  6   7   8   9  10  11 │ │ LT5 LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 12  13  14  15  16  17 │ 18  19  20  21  22  23 │ │ LM5 LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 RM5 │
  │ 24  25  26  27  28  29 │ 30  31  32  33  34  35 │ │ LB5 LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 RB5 │
  ╰───────────╮ 36  37  38 │ 39  40  41 ╭───────────╯ ╰───────────╮ LH2 LH1 LH0 │ RH0 RH1 RH2 ╭───────────╯
              ╰────────────┴────────────╯                         ╰─────────────┴─────────────╯             */

#pragma once

#define LT0  5  // left-top row
#define LT1  4
#define LT2  3
#define LT3  2
#define LT4  1
#define LT5  0

#define RT0  6  // right-top row
#define RT1  7
#define RT2  8
#define RT3  9
#define RT4 10
#define RT5 11

#define LM0 17  // left-middle row
#define LM1 16
#define LM2 15
#define LM3 14
#define LM4 13
#define LM5 12

#define RM0 18  // right-middle row
#define RM1 19
#define RM2 20
#define RM3 21
#define RM4 22
#define RM5 23

#define LB0 29  // left-bottom row
#define LB1 28
#define LB2 27
#define LB3 26
#define LB4 25
#define LB5 24

#define RB0 30  // right-bottom row
#define RB1 31
#define RB2 32
#define RB3 33
#define RB4 34
#define RB5 35

#define LH0 38  // left thumb keys
#define LH1 37
#define LH2 36

#define RH0 39  // right thumb keys
#define RH1 40
#define RH2 41
