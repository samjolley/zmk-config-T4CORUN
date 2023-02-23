#pragma once

// Layer Definitions out toggle
#define HANDSDOWNGOLD  0
#define EXTRA		   1
#define TAP 		   2
#define BUTTON	       3
#define NAV            4
#define MOUSE		   5
#define MEDIA          6
#define NUM            7
#define SYM            8
#define FUN            9
#define EMOJI          10

//Basic Key Aliases
#define ___________     &trans
#define _____x_____     &none

//Layer Taps
#define MOU_SPC &lt     MOUSE   SPACE
#define NAV_TAB &lt     NAVI    TAB
#define NUM_BSP &lt     NUMBER  BSPC
#define FUN_Z   &lt_pky FUNC    Z
#define AD_FSLH &lt_pky	ADJUST  FSLH

//To Layer
#define DEFAULT &to 	HANDSDOWNGOLD
#define EXTRA   &to	    EXTRA

//Shortcuts
#define S_UNDO  &kp LC(Z)
#define S_CUT   &kp LC(X)
#define S_COPY  &kp LC(C)
#define S_PASTE &kp LC(V)
#define S_REDO  &kp LC(Y)

#define CLSETAB &kp LC(W)
#define NEXTTAB &kp LC(TAB)
#define PREVTAB &kp LC(LS(TAB))

//Bluetooth
#define BTClear &bt BT_CLR
#define BT0     &bt BT_SEL 0
#define BT1     &bt BT_SEL 1
#define BT2     &bt BT_SEL 2
#define BT3     &bt BT_SEL 3
#define BT4     &bt BT_SEL 4

//Behavior Configuration
#define QUICK_TAP_TERM 125
#define TAPPING_TERM 200
#define TAPPING_TERM_GUIALT 230
#define TAPPING_TERM_PINKY 250

