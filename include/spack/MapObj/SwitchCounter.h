#pragma once

#include "LiveActor/LiveActor.h"

class SwitchCounter : public LiveActor {
public:
	SwitchCounter(const char *);
	
	s32 obj_arg0; //first switch to count
	s32 obj_arg1;
    s32 obj_arg2;
    s32 obj_arg3;
    s32 obj_arg4;

	s32 counter;

	virtual void init(JMapInfoIter const &);
	virtual void movement();
};