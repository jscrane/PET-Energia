#ifndef __CONFIG_H__
#define __CONFIG_H__

// DISPLAY
#define TFT_BG		VGA_BLACK
#define TFT_FG		VGA_LIME
#define CHARS_PER_LINE  40
#define DISPLAY_LINES	25
#define DISPLAY_RAM_SIZE	0x0400

// RAM provided by uC (must be a multiple of 1024)
#define RAM_SIZE	0x8000

// SPI-RAM
//#define SPIRAM_BASE     0x3000
//#define SPIRAM_EXTENT	(20 * 1024 / 256)

// number of CPU instructions to run per loop
#define CPU_INSTRUCTIONS  750

// where programs and images are stored
//#define PROGRAMS        "/pet/"
#define PROGRAMS        "/"

// rom set
#define SERIES4_ROMS

#endif
