#include <iostream>
#include <stdio.h>

// shared pointer
#include <memory>

#include "cam.h"
#include "camChipFCB8530.h"

main()
{
	int ret = 0;

	/* add optaion chip select */
	std::shared_ptr<camChip> chip(new camChipFCB8530());

	std::shared_ptr<cam> mainCam(new cam(chip));

	ret = mainCam->open();

	return 0;
}

