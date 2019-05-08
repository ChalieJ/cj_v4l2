#include <iostream>
#include <stdio.h>

// shared pointer
#include <memory>

#include "cam.h"
#include "camChip.h"
#include "camChipFCB8530.h"

cam::cam(camChip *c) : 
chip(c) 
{
	printf("cam create\n");

	chip->init();
}

cam::cam(std::shared_ptr<camChip> c) :
chip(c)
{
	printf("cam create\n");

	chip->init();
}

cam::~cam()
{
	printf("cam delete\n");
}

int cam::open()
{
	int ret = 0;

	ret = chip->open_device();
	if(ret < 0) {
		return -1;
	}

	return 0;
}

int cam::close()
{
	return 0;
}

int cam::queryCapabilities()
{
	int ret = 0;
	ret = chip->queryCap(&cap);

	if(0 > ret) {
		return -1;
	}

	return 0;
}

int cam::capture()
{
	return 0;
}

int cam::startStream()
{
	return 0;
}

int cam::stopStream()
{
	return 0;
}

