/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int top = 1; /* -b option; if 0, appear at bottom */
static const char *fonts[] = {
    "JetBrains Mono:style=Regular:pixelsize=11:antialias=true:autohint=true",
    "Font Awesome 6 Free Solid:size=10",
    "Noto Sans:size=10"

};

static const char *prompt = NULL; /* -p option; prompt to the left of input field */
static uint32_t colors[][2] = {
    /*               fg             bg          */
    [SchemeNorm] = {0xc5c9c5ff, 0x181616ff}, /* fg=#c5c9c5, bg=#181616 */
    [SchemeSel] = {0xC8C093ff, 0x7FB4CAff},  /* fg=#C8C093, bg=#7FB4CA */
    [SchemeOut] = {0x000000ff, 0x00ffffff},  /* unchanged */
};

/* -m option; if provided, use that output instead of default output */
static const char *output_name = NULL;

/* -l option; if nonzero, use vertical list with given number of lines */
static unsigned int lines = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
