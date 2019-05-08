#ifndef __CAMCHIPFH325_H__
#define __CAMCHIPFH325_H__

#include "camChip.h"

class camChipFH325 : public camChip
{
public:
	int init();
	int open_device();
	int queryCap(struct v4l2_capability *cap);

private:
	unsigned int x;
	unsigned int y;

	int fd;
};

#endif //__CAMCHIPFH325_H__

