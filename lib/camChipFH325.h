#ifndef __CAMCHIPFH325_H__
#define __CAMCHIPFH325_H__

#include "camChip.h"

class camChipFH325 : public camChip
{
public:
	int init();

	unsigned int x;
	unsigned int y;
};

#endif //__CAMCHIPFH325_H__

