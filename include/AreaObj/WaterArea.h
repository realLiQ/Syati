#pragma once

#include "AreaObj/AreaObj.h"

class WaterArea : public AreaObj
{
public:
	WaterArea(const char *pName);

	virtual ~WaterArea();
	virtual void init(const JMapInfoIter &rIter);
};

class WaterAreaMgr : public AreaObjMgr
{
public:
	WaterAreaMgr(s32 size, const char *pName);

	virtual ~WaterAreaMgr();
};
