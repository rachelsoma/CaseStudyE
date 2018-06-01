/* fs.c
   Some useful functions for OSP Practical Case Study E
*/
#include"fs.h"

unsigned char bitmap[12];
struct entry directory[128];

int toggle_bit(int block)
{

	int elem=block/8;
	int pos=block%8;
	int mask=1<<pos;

	bitmap[elem]^=mask;

	return bitmap[elem]&mask;
}


int block_status(int block)
{
	int elem=block/8;
	int pos=block%8;
	int mask=1<<pos;

	return bitmap[elem]&mask;
}
