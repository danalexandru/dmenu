/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
#include "colorschemes.h"

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const int vertpad = 5;              /* vertical padding of bar */
static const int sidepad = 5;              /* horizontal padding of bar */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 800;                    /* minimum width when centered */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "Hack Nerd Font:pixelsize=14:style=Regular:antialias=true:autohint=true",
    "JoyPixels:pixelsize=14:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { CurrentColorScheme.Normal.Foreground, CurrentColorScheme.Normal.Background },
	[SchemeSel] =  { CurrentColorScheme.Select.Foreground, CurrentColorScheme.Select.Background },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 28;
static unsigned int min_lineheight = 28;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
