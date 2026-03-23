#include <stdint.h>

char 		hdr_id[4] 	= 		{'S','B','M',0};		// File identifier

uint8_t 	hdr_vcode 	= 		16;		// Version code (1.0)

uint16_t	hdr_headlen	=		16;			// length of the header
uint32_t	hdr_dataloc =		0;			// offset of the image data

uint8_t		hdr_flags	=		0b00111000;	// ahem...
/*
	Has no metadata
	Is not palettized
	Completely uncompressed
	Is a graphic
	Uses transparency
	Has arbitrary BPC
	2 bits of unused stuff for this version
*/

uint8_t		hdr_bpc		=		1;

// image resolution
uint16_t	hdr_xsize	=		3;			// width
uint16_t	hdr_ysize	=		3;			// height
// that makes a 3x3 image, as one could imagine (see what i did there)

// now the data
// of which is 000110010101001111011011011111111110
// but i could not in good faith use a c standard data type for it
// :P

// and the rest was history
int main(){return 1;} // don't mind me just forcing g++ to compile
