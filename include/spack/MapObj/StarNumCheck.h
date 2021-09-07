#pragma once

#include "LiveActor/LiveActor.h"

class StarNumCheck : public LiveActor {
public:
	StarNumCheck(const char *);
	
	s32 obj_arg0;
	s32 obj_arg1;
	s32 powerstarnum;

	virtual void init(JMapInfoIter const &);
	virtual void movement();
};