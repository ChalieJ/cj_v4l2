//for printf
#include <stdio.h>

//for open
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "camChipFH325.h"

int camChipFH325::init()
{
	printf("[%s] start\n", __func__);

	x = 1000;
	y = 1000;

	return 0;
};

int camChipFH325::open_device()
{
	printf("[%s] start\n", __func__);

	fd = open("/dev/video0", O_RDWR);
	if(fd < 0) {
		perror("open_device open");
		return -1;
	}

	return 0;
}

int camChipFH325::queryCap(struct v4l2_capability *cap)
{
	int ret;

	ret = ioctl(fd, VIDIOC_QUERYCAP, cap);
	if(0 > ret) {
		fprintf(stderr, "The device does not handle single-planar video capture.\n");
		return -1;
	}

	/* FHD camera : streaming */
	if(!(cap->capabilities & V4L2_CAP_STREAMING)) {
		fprintf(stderr, "The device does not handle single-planar video capture.\n");
		return -1;
	}

	return 0;
}

