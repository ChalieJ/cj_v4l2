#ifndef __CAM_H__
#define __CAM_H__

#include "camChip.h"
#include "camChipFCB8530.h"

#include <memory>

class cam
{
public:
	cam(camChip *c);
	cam(std::shared_ptr<camChip> c);
	~cam();

	int open();
	int close();

	int queryCapabilities();

	int capture();
	int startStream();
	int stopStream();

private:
	int fd;
	//camChip *chip;
	std::shared_ptr<camChip> chip;
	struct v4l2_capability cap;
};

#endif //__CAM_H__
