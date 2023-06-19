#include "keyboard.h"

/* Not actually using this, since we're letting the arcade_inputs module
   handle key mapping (DeMiSTify doesn't yet handle MAME-style 
   coin / start inputs) - but if the number of joystick bits is
   greater than 8, this keymap should be overriden. */

__weak unsigned char joy_keymap[]=
{
	/* Port 2 */
	KEY_Z,
	KEY_LGUI,

	KEY_CAPSLOCK,
	KEY_LSHIFT,
	KEY_ALT,
	KEY_LCTRL,

	KEY_W,
	KEY_S,
	KEY_A,
	KEY_D,

	/* Port 1 */
	KEY_SLASH,
	KEY_RGUI,

	KEY_ENTER,
	KEY_RSHIFT,
	KEY_ALTGR,
	KEY_RCTRL,

	KEY_UPARROW,
	KEY_DOWNARROW,
	KEY_LEFTARROW,
	KEY_RIGHTARROW
};

