#ifndef __CAM_H__
#define __CAM_H__

#include "camChip.h"

class cam
{
public:
	cam(camChip *c);
	~cam();

	int open();
	int close();
	int capture();
	int startStream();
	int stopStream();

private:
	int fd;
	camChip *chip;
};

#endif //__CAM_H__
