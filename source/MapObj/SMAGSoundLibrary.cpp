#include "include/spack/MapObj/SMAGSoundLibrary.h"
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
*	obj arg 0: Sound Effect ID
*	obj_arg 1: doesn't activate SW_A, 0
* 
*/

/*
    Sound ID's:
    0 = COMPLETE MISSION (before power star spawn)
*/


SMAGSoundLibrary::SMAGSoundLibrary(const char* pName) : LiveActor(pName) {

}

void SMAGSoundLibrary::init(JMapInfoIter const& rIter) {
	
	MR::initDefaultPos(this, rIter);
	MR::connectToSceneMapObjMovement(this);
	MR::invalidateClipping(this);

	MR::useStageSwitchReadB(this, rIter);
	MR::getJMapInfoArg0NoInit(rIter, &obj_arg0);
	MR::getJMapInfoArg1NoInit(rIter, &obj_arg1);
	
	MR::needStageSwitchWriteA(this, rIter);

    initSound(1, "SMAGSoundLibrary", false, TVec3f(0.0f, 0.0f, 0.0f));
	
	if (obj_arg0 == -1) {
        OSReport("SMAGSoundLibrary:\nObj_arg0 = -1\nDeleting...\n");
        makeActorDead();
    } 

    OSReport("SMAGSoundLibrary init\n");

	makeActorAppeared();
}

void SMAGSoundLibrary::movement() {

	if (MR::isOnSwitchB(this)) {
        OSReport("SMAGSoundLibrary SW_B\n");
        if (obj_arg0 == 0)
        {
            OSReport("should play\n");
            MR::startSound(this, "SE_SY_TOTAL_COMPLETE", -1, -1);
        }
        //else if () 
        
        
        //ADD OTHER SOUND EFFECTS HERE!



        if (obj_arg1 != 0)
        {
            MR::onSwitchA(this);
        }
		makeActorDead();
	}
}
