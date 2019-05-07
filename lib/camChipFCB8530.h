#ifndef __CAMCHIPFCB8530_H__
#define __CAMCHIPFCB8530_H__

#include "camChip.h"

/* chip dependece : resolution, input */
class camChipFCB8530 : public camChip
{
public:
	int init();

	unsigned int x;
	unsigned int y;
};

#endif //__CAMCHIPFCB8530_H__
