#include "include/spack/MapObj/StarNumCheck.h"
#include "Util/ActorInitUtil.h"
#include "Util/ActorMovementUtil.h"
#include "Util/ActorSwitchUtil.h"
#include "Util/JMapUtil.h"
#include "Util/LiveActorUtil.h"
#include "Util/ObjUtil.h"
#include "Util/PlayerUtil.h"
#include "Util/EventUtil.h"

/*
*	Created by LiQ
* 
*	obj arg 0: how many stars needed for triggering A?
*	obj_arg 1: doesn't use SW_B, 0
* 
*/
StarNumCheck::StarNumCheck(const char* pName) : LiveActor(pName) {

}

void StarNumCheck::init(JMapInfoIter const& rIter) {
	OSReport("init\n");
	
	MR::initDefaultPos(this, rIter);
	MR::connectToSceneMapObjMovement(this);
	MR::invalidateClipping(this);

	MR::useStageSwitchReadB(this, rIter);
	MR::getJMapInfoArg0NoInit(rIter, &obj_arg0);
	MR::getJMapInfoArg1NoInit(rIter, &obj_arg1);
	
	MR::needStageSwitchWriteA(this, rIter);
	
	if (obj_arg0 == -1) { obj_arg0 = 0; } 

	makeActorAppeared();
}

void StarNumCheck::movement() {
	if (obj_arg1 == 0) {
		powerstarnum = MR::getPowerStarNum();
		if (powerstarnum >= obj_arg0)
		{
			MR::onSwitchA(this);
		}
		makeActorDead();
	}
	if (MR::isOnSwitchB(this)) {
		powerstarnum = MR::getPowerStarNum();
		if (powerstarnum >= obj_arg0)
		{
			MR::onSwitchA(this);
		}
		makeActorDead();
	}
}
