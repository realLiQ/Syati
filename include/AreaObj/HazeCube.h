#pragma once

#include "AreaObj/AreaObj.h"

class HazeCube : public AreaObj
{
public:
	HazeCube(const char *pName);

	virtual ~HazeCube();
	virtual void init(const JMapInfoIter &rIter);
	virtual bool isInVolume(const TVec3f &rTranslation) const;
	virtual const char* getManagerName() const;
};
