//for printf
#include <stdio.h>

//for open
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "camChipFCB8530.h"

int camChipFCB8530::init()
{
	printf("[%s] start\n", __func__);
	x = 2000;
	y = 2000;
	return 0;
}	

int camChipFCB8530::open_device()
{
	printf("[%s] start\n", __func__);

	fd = open("/dev/video0", O_RDWR);
	if(fd < 0) {
		perror("open_device open");
		return -1;
	}

	return 0;
}

int camChipFCB8530::queryCap(struct v4l2_capability *cap)
{
	int ret;

	ret = ioctl(fd, VIDIOC_QUERYCAP, cap);
	if(0 > ret) {
		fprintf(stderr, "The device does not handle single-planar video capture.\n");
		return -1;
	}

	/* 4K camera : capture */
	if(!(cap->capabilities & V4L2_CAP_VIDEO_CAPTURE)) {
		fprintf(stderr, "The device does not handle single-planar video capture.\n");
		return -1;
	}

	return 0;
}

