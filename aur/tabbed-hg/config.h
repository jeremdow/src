static const char *font        = "-*-terminus-medium-r-normal-*-16-*-*-*-*-*-*-*";
static const char *normbgcolor = "#555753";
static const char *normfgcolor = "#000000";
static const char *selbgcolor  = "#d3d7cf";
static const char *selfgcolor  = "#000000";
static const char *before      = "<";
static const char *after       = ">";
static const int tabwidth      = 200;
static const Bool foreground   = False;

#define MODKEY ControlMask
static Key keys[] = { \
	/* modifier                     key        function        argument */
	{ MODKEY|ShiftMask,             XK_Return, focusonce,      { 0 } },
	{ MODKEY,                       XK_Return, spawn,          { .v = (char*[]){ "surf", "-e", winid, "google.com", NULL} } },
  { MODKEY|Mod1Mask,              XK_Return, spawn,          { .v = (char*[]){ "urxvtc", "-embed", winid, "-e", "bash", NULL} } },
	{ MODKEY|ShiftMask,             XK_l,      rotate,         { .i = +1 } },
	{ MODKEY|ShiftMask,             XK_h,      rotate,         { .i = -1 } },
	{ MODKEY,                       XK_Tab,    rotate,         { .i = 0 } },
	{ MODKEY,                       XK_1,      move,           { .i = 0 } },
	{ MODKEY,                       XK_2,      move,           { .i = 1 } },
	{ MODKEY,                       XK_3,      move,           { .i = 2 } },
	{ MODKEY,                       XK_4,      move,           { .i = 3 } },
	{ MODKEY,                       XK_5,      move,           { .i = 4 } },
	{ MODKEY,                       XK_6,      move,           { .i = 5 } },
	{ MODKEY,                       XK_7,      move,           { .i = 6 } },
	{ MODKEY,                       XK_8,      move,           { .i = 7 } },
	{ MODKEY,                       XK_9,      move,           { .i = 8 } },
	{ MODKEY,                       XK_0,      move,           { .i = 9 } },
	{ MODKEY|ShiftMask,             XK_c,      killclient,     { 0 } },
};
