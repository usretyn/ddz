#include "stdafx.h"
#include "DdzRule.h"
USING_NS_POKER;

DdzRule::DdzRule(void)
{	this->player=3;
	this->packCount=1;
	this->reserveCardCount=3;
	this->maxOutCardCount =20;
}


DdzRule::~DdzRule(void)
{
}
