#pragma once

#include "LiveActor.h"

class ActorCameraInfo;

class PowerStarSpawner : public LiveActor {
public:
	PowerStarSpawner(const char *);

	virtual void init(JMapInfoIter const &);
	virtual void movement();
    virtual void getStarSpawnPos(f32 offset);

	ActorCameraInfo* mCamInfo;
	s32 mScenario;
	s32 mDelay;
	s32 mElapsed;
	s32 mSpawnMode;
	s32 GroupID;
	bool mFromMario;
	bool arg1;
	bool arg2;
	bool arg3;
	bool mDebug;
	f32 YOffset;
	s32 mUseDisplayModel;
};
