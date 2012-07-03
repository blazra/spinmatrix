//cislovano je od leveho horniho rohu,
//takze pri pohledu na display je to tam musi sunout ze spoda

//tohle vytvoril DiGGiTuv script napsany v pythonu...
const uint8_t chars[][] PROGMEM = 
{
//char  A (0)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000100},
	{0b00000000,0b00000000,0b00000000,0b00111100},
	{0b00000000,0b00000000,0b00000001,0b11111100},
	{0b00000000,0b00000000,0b00000111,0b11111000},
	{0b00000000,0b00000000,0b00111111,0b11100000},
	{0b00000000,0b00000001,0b11111111,0b00000000},
	{0b00000000,0b00000111,0b11111111,0b00000000},
	{0b00000000,0b00111111,0b11100111,0b00000000},
	{0b00000000,0b11111111,0b00000111,0b00000000},
	{0b00000001,0b11111100,0b00000111,0b00000000},
	{0b00000001,0b11100000,0b00000111,0b00000000},
	{0b00000001,0b11111000,0b00000111,0b00000000},
	{0b00000000,0b11111111,0b00000111,0b00000000},
	{0b00000000,0b00111111,0b11100111,0b00000000},
	{0b00000000,0b00000111,0b11111111,0b00000000},
	{0b00000000,0b00000000,0b11111111,0b00000000},
	{0b00000000,0b00000000,0b00111111,0b11100000},
	{0b00000000,0b00000000,0b00000111,0b11111000},
	{0b00000000,0b00000000,0b00000001,0b11111100},
	{0b00000000,0b00000000,0b00000000,0b00111100},
	{0b00000000,0b00000000,0b00000000,0b00000100},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  B (1)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11100001,0b11100000,0b00011100},
	{0b00000000,0b11100001,0b11110000,0b00111000},
	{0b00000000,0b11111111,0b10111000,0b01111000},
	{0b00000000,0b01111111,0b00111111,0b11111000},
	{0b00000000,0b00111110,0b00011111,0b11110000},
	{0b00000000,0b00000000,0b00000111,0b11000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  C (2)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000001,0b11111100,0b00000000},
	{0b00000000,0b00001111,0b11111111,0b10000000},
	{0b00000000,0b00011111,0b11111111,0b11000000},
	{0b00000000,0b00111110,0b00000011,0b11100000},
	{0b00000000,0b01111000,0b00000000,0b11110000},
	{0b00000000,0b11110000,0b00000000,0b01111000},
	{0b00000000,0b11100000,0b00000000,0b00111000},
	{0b00000000,0b11100000,0b00000000,0b00111000},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000000,0b11100000,0b00000000,0b00111000},
	{0b00000000,0b11100000,0b00000000,0b00111000},
	{0b00000000,0b11100000,0b00000000,0b00111000},
	{0b00000000,0b01110000,0b00000000,0b01110000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  D (3)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11100000,0b00000000,0b00011100},
	{0b00000000,0b11100000,0b00000000,0b00111000},
	{0b00000000,0b11100000,0b00000000,0b00111000},
	{0b00000000,0b11110000,0b00000000,0b01111000},
	{0b00000000,0b01111000,0b00000000,0b11110000},
	{0b00000000,0b00111110,0b00000011,0b11100000},
	{0b00000000,0b00011111,0b11111111,0b11000000},
	{0b00000000,0b00001111,0b11111111,0b10000000},
	{0b00000000,0b00000011,0b11111110,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  E (4)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  F (5)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11000000,0b11100000,0b00000000},
	{0b00000001,0b11000000,0b11100000,0b00000000},
	{0b00000001,0b11000000,0b11100000,0b00000000},
	{0b00000001,0b11000000,0b11100000,0b00000000},
	{0b00000001,0b11000000,0b11100000,0b00000000},
	{0b00000001,0b11000000,0b11100000,0b00000000},
	{0b00000001,0b11000000,0b11100000,0b00000000},
	{0b00000001,0b11000000,0b11100000,0b00000000},
	{0b00000001,0b11000000,0b11100000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  G (6)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000011,0b11111110,0b00000000},
	{0b00000000,0b00001111,0b11111111,0b10000000},
	{0b00000000,0b00011111,0b11111111,0b11000000},
	{0b00000000,0b00111110,0b00000011,0b11100000},
	{0b00000000,0b01111000,0b00000000,0b11110000},
	{0b00000000,0b11110000,0b00000000,0b01111000},
	{0b00000000,0b11100000,0b00000000,0b00111000},
	{0b00000001,0b11100000,0b00000000,0b00111100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b01110000,0b00011100},
	{0b00000001,0b11000000,0b01110000,0b00011100},
	{0b00000001,0b11000000,0b01110000,0b00011100},
	{0b00000000,0b11100000,0b01110000,0b00111000},
	{0b00000000,0b11100000,0b01110000,0b00111000},
	{0b00000000,0b11100000,0b01111111,0b11111000},
	{0b00000000,0b01110000,0b01111111,0b11110000},
	{0b00000000,0b00000000,0b01111111,0b11100000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  H (7)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000000,0b00000000,0b11100000,0b00000000},
	{0b00000000,0b00000000,0b11100000,0b00000000},
	{0b00000000,0b00000000,0b11100000,0b00000000},
	{0b00000000,0b00000000,0b11100000,0b00000000},
	{0b00000000,0b00000000,0b11100000,0b00000000},
	{0b00000000,0b00000000,0b11100000,0b00000000},
	{0b00000000,0b00000000,0b11100000,0b00000000},
	{0b00000000,0b00000000,0b11100000,0b00000000},
	{0b00000000,0b00000000,0b11100000,0b00000000},
	{0b00000000,0b00000000,0b11100000,0b00000000},
	{0b00000000,0b00000000,0b11100000,0b00000000},
	{0b00000000,0b00000000,0b11100000,0b00000000},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  I (8)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  J (9)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000011},
	{0b00000000,0b00000000,0b00000000,0b00000011},
	{0b00000000,0b00000000,0b00000000,0b00000011},
	{0b00000000,0b00000000,0b00000000,0b00000111},
	{0b00000001,0b11111111,0b11111111,0b11111110},
	{0b00000001,0b11111111,0b11111111,0b11111110},
	{0b00000001,0b11111111,0b11111111,0b11111000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  K (10)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000000,0b00000000,0b11100000,0b00000000},
	{0b00000000,0b00000001,0b11110000,0b00000000},
	{0b00000000,0b00000011,0b11111000,0b00000000},
	{0b00000000,0b00000111,0b10111100,0b00000000},
	{0b00000000,0b00001111,0b00011110,0b00000000},
	{0b00000000,0b00011111,0b00001111,0b00000000},
	{0b00000000,0b00011110,0b00000111,0b10000000},
	{0b00000000,0b00111100,0b00000011,0b11000000},
	{0b00000000,0b01111000,0b00000001,0b11100000},
	{0b00000000,0b11110000,0b00000000,0b11110000},
	{0b00000001,0b11100000,0b00000000,0b01111000},
	{0b00000001,0b11000000,0b00000000,0b00111100},
	{0b00000001,0b10000000,0b00000000,0b00011100},
	{0b00000001,0b00000000,0b00000000,0b00001100},
	{0b00000000,0b00000000,0b00000000,0b00000100},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  L (11)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  M (12)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11100000,0b00000000,0b00000000},
	{0b00000001,0b11111100,0b00000000,0b00000000},
	{0b00000000,0b11111111,0b10000000,0b00000000},
	{0b00000000,0b00011111,0b11100000,0b00000000},
	{0b00000000,0b00000111,0b11111100,0b00000000},
	{0b00000000,0b00000000,0b11111111,0b10000000},
	{0b00000000,0b00000000,0b00011111,0b11000000},
	{0b00000000,0b00000000,0b00000011,0b11000000},
	{0b00000000,0b00000000,0b00011111,0b11000000},
	{0b00000000,0b00000000,0b11111111,0b10000000},
	{0b00000000,0b00000111,0b11111100,0b00000000},
	{0b00000000,0b00011111,0b11100000,0b00000000},
	{0b00000000,0b11111111,0b10000000,0b00000000},
	{0b00000001,0b11111100,0b00000000,0b00000000},
	{0b00000001,0b11100000,0b00000000,0b00000000},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  N (13)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11110000,0b00000000,0b00000000},
	{0b00000001,0b11111100,0b00000000,0b00000000},
	{0b00000000,0b01111110,0b00000000,0b00000000},
	{0b00000000,0b00011111,0b10000000,0b00000000},
	{0b00000000,0b00000111,0b11100000,0b00000000},
	{0b00000000,0b00000001,0b11111000,0b00000000},
	{0b00000000,0b00000000,0b11111100,0b00000000},
	{0b00000000,0b00000000,0b00111111,0b00000000},
	{0b00000000,0b00000000,0b00001111,0b11000000},
	{0b00000000,0b00000000,0b00000011,0b11110000},
	{0b00000000,0b00000000,0b00000001,0b11111100},
	{0b00000000,0b00000000,0b00000000,0b01111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  O (14)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000001,0b11111100,0b00000000},
	{0b00000000,0b00001111,0b11111111,0b10000000},
	{0b00000000,0b00011111,0b11111111,0b11000000},
	{0b00000000,0b00111110,0b00000011,0b11100000},
	{0b00000000,0b01111000,0b00000000,0b11110000},
	{0b00000000,0b11110000,0b00000000,0b01111000},
	{0b00000000,0b11100000,0b00000000,0b00111000},
	{0b00000001,0b11100000,0b00000000,0b00111100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11100000,0b00000000,0b00111100},
	{0b00000000,0b11100000,0b00000000,0b00111000},
	{0b00000000,0b11110000,0b00000000,0b01111000},
	{0b00000000,0b01111000,0b00000000,0b11110000},
	{0b00000000,0b00111110,0b00000011,0b11100000},
	{0b00000000,0b00011111,0b11111111,0b11000000},
	{0b00000000,0b00001111,0b11111111,0b10000000},
	{0b00000000,0b00000001,0b11111100,0b00000000},
//char  P (15)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11000000,0b00111000,0b00000000},
	{0b00000001,0b11000000,0b00111000,0b00000000},
	{0b00000001,0b11000000,0b00111000,0b00000000},
	{0b00000001,0b11000000,0b00111000,0b00000000},
	{0b00000001,0b11000000,0b00111000,0b00000000},
	{0b00000001,0b11000000,0b00111000,0b00000000},
	{0b00000001,0b11000000,0b00111000,0b00000000},
	{0b00000001,0b11100000,0b01111000,0b00000000},
	{0b00000000,0b11110000,0b11110000,0b00000000},
	{0b00000000,0b11111111,0b11110000,0b00000000},
	{0b00000000,0b01111111,0b11100000,0b00000000},
	{0b00000000,0b00011111,0b10000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  Q (16)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000111,0b11111000,0b00000000},
	{0b00000000,0b00011111,0b11111110,0b00000000},
	{0b00000000,0b01111111,0b11111111,0b10000000},
	{0b00000000,0b11111100,0b00001111,0b11000000},
	{0b00000001,0b11110000,0b00000011,0b11100000},
	{0b00000001,0b11100000,0b00000001,0b11100000},
	{0b00000001,0b11000000,0b00000000,0b11100000},
	{0b00000011,0b10000000,0b00000000,0b01110000},
	{0b00000011,0b10000000,0b00000000,0b01110000},
	{0b00000011,0b10000000,0b00000000,0b01110000},
	{0b00000011,0b10000000,0b00000000,0b01110000},
	{0b00000011,0b10000000,0b00000000,0b01110000},
	{0b00000011,0b10000000,0b00000000,0b01111100},
	{0b00000001,0b11000000,0b00000000,0b11111110},
	{0b00000001,0b11100000,0b00000001,0b11111111},
	{0b00000001,0b11110000,0b00000011,0b11000111},
	{0b00000000,0b11111100,0b00001111,0b11000011},
	{0b00000000,0b01111111,0b11111111,0b10000001},
	{0b00000000,0b00011111,0b11111110,0b00000000},
	{0b00000000,0b00000111,0b11111000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  R (17)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11000000,0b01110000,0b00000000},
	{0b00000001,0b11000000,0b01110000,0b00000000},
	{0b00000001,0b11000000,0b01110000,0b00000000},
	{0b00000001,0b11000000,0b01110000,0b00000000},
	{0b00000001,0b11000000,0b01110000,0b00000000},
	{0b00000001,0b11000000,0b01110000,0b00000000},
	{0b00000001,0b11000000,0b01111000,0b00000000},
	{0b00000001,0b11100000,0b11111100,0b00000000},
	{0b00000000,0b11110001,0b11111110,0b00000000},
	{0b00000000,0b11111111,0b11001111,0b10000000},
	{0b00000000,0b01111111,0b11000111,0b11110000},
	{0b00000000,0b00011111,0b00000001,0b11111100},
	{0b00000000,0b00000000,0b00000000,0b01111100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00000100},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  S (18)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00011111,0b00000000,0b00111000},
	{0b00000000,0b01111111,0b10000000,0b00111000},
	{0b00000000,0b11111111,0b11000000,0b00011100},
	{0b00000000,0b11110001,0b11100000,0b00011100},
	{0b00000000,0b11100000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b11100000,0b00011100},
	{0b00000001,0b11000000,0b01110000,0b00011100},
	{0b00000001,0b11000000,0b01110000,0b00011100},
	{0b00000001,0b11000000,0b01110000,0b00011100},
	{0b00000001,0b11000000,0b01110000,0b00011100},
	{0b00000001,0b11000000,0b01111000,0b00011100},
	{0b00000001,0b11000000,0b00111000,0b00111000},
	{0b00000001,0b11000000,0b00111100,0b01111000},
	{0b00000000,0b11100000,0b00011111,0b11111000},
	{0b00000000,0b11100000,0b00001111,0b11110000},
	{0b00000000,0b00000000,0b00000111,0b11000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  T (19)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11111111,0b11111111,0b11111100},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  U (20)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b11111111,0b11111111,0b10000000},
	{0b00000001,0b11111111,0b11111111,0b11100000},
	{0b00000001,0b11111111,0b11111111,0b11110000},
	{0b00000000,0b00000000,0b00000000,0b11111000},
	{0b00000000,0b00000000,0b00000000,0b00111000},
	{0b00000000,0b00000000,0b00000000,0b00111100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00111100},
	{0b00000000,0b00000000,0b00000000,0b00111000},
	{0b00000000,0b00000000,0b00000000,0b11111000},
	{0b00000001,0b11111111,0b11111111,0b11110000},
	{0b00000001,0b11111111,0b11111111,0b11100000},
	{0b00000001,0b11111111,0b11111111,0b10000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  V (21)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b11100000,0b00000000,0b00000000},
	{0b00000001,0b11111100,0b00000000,0b00000000},
	{0b00000000,0b11111111,0b00000000,0b00000000},
	{0b00000000,0b00111111,0b11100000,0b00000000},
	{0b00000000,0b00000111,0b11111000,0b00000000},
	{0b00000000,0b00000000,0b11111111,0b00000000},
	{0b00000000,0b00000000,0b00111111,0b11100000},
	{0b00000000,0b00000000,0b00000111,0b11111000},
	{0b00000000,0b00000000,0b00000000,0b11111100},
	{0b00000000,0b00000000,0b00000000,0b00111100},
	{0b00000000,0b00000000,0b00000000,0b11111100},
	{0b00000000,0b00000000,0b00000111,0b11111000},
	{0b00000000,0b00000000,0b00111111,0b11100000},
	{0b00000000,0b00000000,0b11111111,0b00000000},
	{0b00000000,0b00000111,0b11111100,0b00000000},
	{0b00000000,0b00111111,0b11100000,0b00000000},
	{0b00000000,0b11111111,0b00000000,0b00000000},
	{0b00000001,0b11111100,0b00000000,0b00000000},
	{0b00000001,0b11100000,0b00000000,0b00000000},
	{0b00000001,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  W (22)
	{0b00000001,0b11111111,0b10000000,0b00000000},
	{0b00000000,0b01111111,0b11111000,0b00000000},
	{0b00000000,0b00000111,0b11111111,0b10000000},
	{0b00000000,0b00000000,0b01111111,0b11111000},
	{0b00000000,0b00000000,0b00001111,0b11111000},
	{0b00000000,0b00000000,0b00000000,0b11111000},
	{0b00000000,0b00000000,0b00000000,0b11111000},
	{0b00000000,0b00000000,0b00001111,0b11110000},
	{0b00000000,0b00000000,0b11111111,0b00000000},
	{0b00000000,0b00001111,0b11110000,0b00000000},
	{0b00000000,0b11111111,0b00000000,0b00000000},
	{0b00000001,0b11110000,0b00000000,0b00000000},
	{0b00000001,0b11110000,0b00000000,0b00000000},
	{0b00000000,0b11111111,0b00000000,0b00000000},
	{0b00000000,0b00001111,0b11110000,0b00000000},
	{0b00000000,0b00000000,0b11111111,0b00000000},
	{0b00000000,0b00000000,0b00001111,0b11110000},
	{0b00000000,0b00000000,0b00000000,0b11111000},
	{0b00000000,0b00000000,0b00000000,0b11111000},
	{0b00000000,0b00000000,0b00001111,0b11111000},
	{0b00000000,0b00000000,0b11111111,0b11111000},
	{0b00000000,0b00001111,0b11111111,0b10000000},
	{0b00000000,0b01111111,0b11111000,0b00000000},
	{0b00000001,0b11111111,0b10000000,0b00000000},
//char  X (23)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000100},
	{0b00000001,0b00000000,0b00000000,0b00001100},
	{0b00000001,0b10000000,0b00000000,0b00111100},
	{0b00000001,0b11100000,0b00000000,0b01111100},
	{0b00000001,0b11110000,0b00000001,0b11111000},
	{0b00000000,0b11111100,0b00000011,0b11100000},
	{0b00000000,0b00111110,0b00001111,0b11000000},
	{0b00000000,0b00011111,0b10011111,0b00000000},
	{0b00000000,0b00000111,0b11111110,0b00000000},
	{0b00000000,0b00000011,0b11111000,0b00000000},
	{0b00000000,0b00000011,0b11111000,0b00000000},
	{0b00000000,0b00000111,0b11111110,0b00000000},
	{0b00000000,0b00011111,0b10011111,0b00000000},
	{0b00000000,0b00111110,0b00001111,0b11000000},
	{0b00000000,0b11111100,0b00000011,0b11100000},
	{0b00000001,0b11110000,0b00000001,0b11111000},
	{0b00000001,0b11100000,0b00000000,0b01111100},
	{0b00000001,0b10000000,0b00000000,0b00111100},
	{0b00000001,0b00000000,0b00000000,0b00001100},
	{0b00000000,0b00000000,0b00000000,0b00000100},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  Y (24)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b10000000,0b00000000,0b00000000},
	{0b00000001,0b11100000,0b00000000,0b00000000},
	{0b00000001,0b11110000,0b00000000,0b00000000},
	{0b00000000,0b11111100,0b00000000,0b00000000},
	{0b00000000,0b00111110,0b00000000,0b00000000},
	{0b00000000,0b00011111,0b10000000,0b00000000},
	{0b00000000,0b00000111,0b11000000,0b00000000},
	{0b00000000,0b00000011,0b11111111,0b11111100},
	{0b00000000,0b00000000,0b11111111,0b11111100},
	{0b00000000,0b00000011,0b11111111,0b11111100},
	{0b00000000,0b00000111,0b11000000,0b00000000},
	{0b00000000,0b00011111,0b10000000,0b00000000},
	{0b00000000,0b00111110,0b00000000,0b00000000},
	{0b00000000,0b11111100,0b00000000,0b00000000},
	{0b00000001,0b11110000,0b00000000,0b00000000},
	{0b00000001,0b11100000,0b00000000,0b00000000},
	{0b00000001,0b10000000,0b00000000,0b00000000},
	{0b00000001,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
//char  Z (25)
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00111100},
	{0b00000001,0b11000000,0b00000000,0b01111100},
	{0b00000001,0b11000000,0b00000001,0b11111100},
	{0b00000001,0b11000000,0b00000011,0b11111100},
	{0b00000001,0b11000000,0b00000111,0b11011100},
	{0b00000001,0b11000000,0b00001111,0b10011100},
	{0b00000001,0b11000000,0b00111110,0b00011100},
	{0b00000001,0b11000000,0b01111100,0b00011100},
	{0b00000001,0b11000000,0b11111000,0b00011100},
	{0b00000001,0b11000001,0b11110000,0b00011100},
	{0b00000001,0b11000011,0b11000000,0b00011100},
	{0b00000001,0b11001111,0b10000000,0b00011100},
	{0b00000001,0b11011111,0b00000000,0b00011100},
	{0b00000001,0b11111110,0b00000000,0b00011100},
	{0b00000001,0b11111100,0b00000000,0b00011100},
	{0b00000001,0b11110000,0b00000000,0b00011100},
	{0b00000001,0b11100000,0b00000000,0b00011100},
	{0b00000001,0b11000000,0b00000000,0b00011100},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000},
	{0b00000000,0b00000000,0b00000000,0b00000000}
};
//a to je prosim vse
