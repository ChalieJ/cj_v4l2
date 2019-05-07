#include <iostream>
#include <stdio.h>

#include "cam.h"
#include "camChip.h"

cam::cam(camChip *c) : 
chip(c) 
{
	printf("cam create\n");
}

cam::~cam()
{
	printf("cam delete\n");
}

int cam::open()
{
	return 0;
}

int cam::close()
{
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

