#pragma once

#include "syati.h"
#include "JGeometry/TVec3.h"

class GravityInfo
{
public:
	GravityInfo();

	void init();

	TVec3f _0;
	s32 _C;
	PlanetGravity* mGravity; // _10
};
