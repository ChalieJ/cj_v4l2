#include <iostream>
#include <stdio.h>

#include "cam.h"
#include "camChipFCB8530.h"

main()
{
	/* add optaiom chip select */
	camChip *chip = new camChipFCB8530();
	chip->init();

	cam *mainCam = new cam(chip);
	
	return 0;
}

