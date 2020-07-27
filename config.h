/* user and group to drop privileges to */

#include "theme.h"

static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT]   = THEME_BLACK, /* after initialization */
	[INPUT]  = THEME_BLUE,  /* during input */
	[FAILED] = THEME_RED,   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
