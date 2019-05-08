#ifndef __CAMCHIPFCB8530_H__
#define __CAMCHIPFCB8530_H__

#include "camChip.h"

/* chip dependece : resolution, input */
class camChipFCB8530 : public camChip
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

#endif //__CAMCHIPFCB8530_H__
