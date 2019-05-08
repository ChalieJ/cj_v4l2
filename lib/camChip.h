#ifndef __CAMCHIP_H__
#define __CAMCHIP_H__

// for fprintf
#include <stdio.h>

// for ioctl
#include <sys/ioctl.h>

// for v4l2
#include <linux/videodev2.h>

class camChip
{
public:
	virtual int init() = 0;
	virtual int open_device() = 0;
	virtual int queryCap(struct v4l2_capability *cap) = 0;

private:
	unsigned int x;
	unsigned int y;

	int fd;
};

#endif //__CAMCHIP_H__
