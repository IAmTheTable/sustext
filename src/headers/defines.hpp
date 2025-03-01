#ifndef __DEFINES_HPP
#define __DEFINES_HPP

/* Compatability check for different platforms */
#ifndef _DEFAULT_SOURCE
#define _DEFAULT_SOURCE
#endif // _DEFAULT_SOURCE

#ifndef _BSD_SOURCE
#define _BSD_SOURCE
#endif // _BSD_SOURCE

#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif // _GNU_SOURCE

#include <ctype.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <termios.h>
#include <sys/types.h>

#define CTRL_KEY(k) ((k) & 0x1f)
#define SUSTEXT_VERSION "v0.6.1-Alpha"

#define FLAGS_INIT {false, false}
#define ARGS_INIT {nullptr}

enum editorKey{
	ARROW_LEFT = 1000,
	ARROW_RIGHT,
	ARROW_UP,
	ARROW_DOWN,
	DEL_KEY,
	HOME_KEY,
	END_KEY,
	PAGE_UP,
	PAGE_DOWN
};

#endif // __DEFINES_HPP