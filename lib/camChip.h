#ifndef __CAMCHIP_H__
#define __CAMCHIP_H__

class camChip
{
public:
	virtual int init() = 0;

	unsigned int x;
	unsigned int y;
};

#endif //__CAMCHIP_H__
