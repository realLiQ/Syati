#pragma once

#include "LiveActor/LiveActor.h"

class SMAGSoundLibrary : public LiveActor {
public:
	SMAGSoundLibrary(const char *);
	
	s32 obj_arg0;
	s32 obj_arg1;

	virtual void init(JMapInfoIter const &);
	virtual void movement();
};