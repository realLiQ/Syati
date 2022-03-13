#include "include/spack/MapObj/SwitchCounter.h"
#include "Util/ActorInitUtil.h"
#include "Util/ActorMovementUtil.h"
#include "Util/ActorSwitchUtil.h"
#include "Util/JMapUtil.h"
#include "Util/LiveActorUtil.h"
#include "Util/ObjUtil.h"
#include "Util/PlayerUtil.h"
#include "Util/EventUtil.h"
#include "Util/SoundUtil.h"

/*
*	Created by LiQ
* 
*	obj arg 0 - 4: switches to read
* 
*/

/*
    Sound ID's:
    0 = COMPLETE MISSION (before power star spawn)
*/


SwitchCounter::SwitchCounter(const char* pName) : LiveActor(pName) {

}

void SwitchCounter::init(JMapInfoIter const& rIter) {
	
	MR::initDefaultPos(this, rIter);
	MR::connectToSceneMapObjMovement(this);
	MR::invalidateClipping(this);

	MR::useStageSwitchReadB(this, rIter);
	MR::getJMapInfoArg0NoInit(rIter, &obj_arg0);
	MR::getJMapInfoArg1NoInit(rIter, &obj_arg1);
	
	MR::needStageSwitchWriteA(this, rIter);

    counter = 0;

    OSReport("SwitchCounter (SMAG) init\n");

	makeActorAppeared();
}

void SwitchCounter::movement() {

}
