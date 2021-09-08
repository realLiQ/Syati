#include "spack/MapObj/PowerStarSpawner.h"
#include "Util.h"
#include "Player/MarioAccess.h"
#include "Player/MarioActor.h"
#include "LiveActor/Model/DummyDisplayModel.h"

/*
* Created by Aurum, Evanbowl & Someone, with Group ID support thanks to Zyphro.
* 
* Spawns the specified Power Star if its SW_A is activated. The delay until the star spawns as well
* as the position from where the star spawns can be specified as well.
*
* One of my favorite objects!
*/


PowerStarSpawner::PowerStarSpawner(const char* pName) : LiveActor(pName) {
	mScenario = 1;
	mDelay = 0;
	mElapsed = 0;
    mCamInfo = 0;
	mFromMario = 0;
    mSpawnMode = -1;
    mDebug = 0;
    arg1 = 0;
    arg2 = 0;
    arg3 = 0;
    YOffset = 300.0f;
    mUseDisplayModel = -1;
}

DummyDisplayModel* DisplayStar;
DummyDisplayModel* DisplayStarC;

void PowerStarSpawner::init(JMapInfoIter const& rIter) {
    MR::initDefaultPos(this, rIter);
    
    if (MR::getJMapInfoArg6NoInit(rIter, &mDebug) == 1)
    MR::processInitFunction(this, "StarPiece", false); //Shows a star piece where the star will spawn when activated.

	MR::connectToSceneMapObj(this);
	MR::invalidateClipping(this);

	MR::useStageSwitchReadA(this, rIter); //Reads SW_A.

    //This uses a LOT of args.
	MR::getJMapInfoArg0NoInit(rIter, &mScenario); //Star ID
	MR::getJMapInfoArg1NoInit(rIter, &mDelay); //Delay before spawn.
	MR::getJMapInfoArg2NoInit(rIter, &mFromMario); //Should the Star start it's spawn path at Mario?
	MR::getJMapInfoArg3NoInit(rIter, &mSpawnMode); //No Time Stop/Instant Appear/Squizzard Spawn
    MR::getJMapInfoArg4NoInit(rIter, &YOffset); //Spawn At Mario Y offset
    MR::getJMapInfoArg5NoInit(rIter, &mUseDisplayModel); //Shows an intangible Power Star model where the PowerStarSpawner is placed.

    //Obj_arg7 can not be used on this object since the game reads from it to decide which display model should be loaded.

    MR::getJMapInfoGroupID(rIter, &GroupID); //This will cause the PowerStarSpawner to start and end the Power Star's spawn path at Mario.

    initSound(1, "PowerStarSpawner", false, TVec3f(0.0f, 0.0f, 0.0f)); //Initializes Sound
    MR::declarePowerStar(this, mScenario); //Declares the star determined by mScenario.
    makeActorAppeared();

    if (mUseDisplayModel == 0) {
    DisplayStarC = MR::createDummyDisplayModelCrystalItem(this, 7, mTranslation, mRotation);
    DisplayStarC->PowerStarSetupColor(this, mScenario);
    DisplayStarC->makeActorAppeared();//Display models are weird
    }

    if (mUseDisplayModel == 1) {
    DisplayStar = MR::createDummyDisplayModel(this, rIter, 7, mTranslation, mRotation);
    DisplayStar->PowerStarSetupColor(this, mScenario);
    DisplayStar->makeActorAppeared();
    }

    if (GroupID >= 0) {
    MR::joinToGroupArray(this, rIter, "パワースター出現ポイントグループ", 0x10); //Joins the Power Star to the Group Array.\
    This makes the Power Star Spawner behave like a PowerStarAppearPoint.

	MR::initActorCamera(this, rIter, &mCamInfo); //The bane of my existence.\
    This is used to initialize an actor camera.
    }
}


void PowerStarSpawner::getStarSpawnPos(f32 offset) {
    MR::setPosition(this, *MR::getPlayerPos()); //Teleports the PowerStarSpawner to Mario

    MarioActor* playeractor = MarioAccess::getPlayerActor(); //Gets the player actor.
    TVec3f gravityvec = *playeractor->MarioActor::getGravityVec(); //Gets the gravity vector of the player.
    JMAVECScaleAdd((Vec*)&gravityvec, (Vec*)&mTranslation, (Vec*)&mTranslation, offset*-1); //This function always moves the Power Star Spawner to above Mario relative to the current gravity.\
    Var "offset" is multiplied by -1 because a negative offset means up.
    }

void PowerStarSpawner::movement() {
    if (GroupID >= 0)
    PowerStarSpawner::getStarSpawnPos(YOffset); //This function moves the Power Star Spawner to Mario and also puts it above him relative to the current gravity, only if a Group ID is set.

    if (mFromMario == 1 && GroupID < 0)
    PowerStarSpawner::getStarSpawnPos(250); //This is used to bypass an issue where if a star starts it's spawn path at the player, it de-rails the player off of launch star rails.


	if (MR::isOnSwitchA(this)) {
		mElapsed++;
		if (mElapsed >= mDelay) {

            switch (mSpawnMode) {
            case 0: //time continues during demo
            arg1 = 1;
            break;
            case 1: //star appears instantly
            arg2 = 1;
            break;
            case 2: //squizzard spawn
            arg3 = 1;
            break;
            case 3: //time continues during demo
            arg1 = 1;
            arg3 = 1;
            break;
            }

            MR::appearEventPowerStar("PowerStarSpawner", mScenario, &mTranslation, arg1, arg2, arg3);

            if (mUseDisplayModel == 0)
                DisplayStarC->makeActorDead();
            else if (mUseDisplayModel == 1)
                DisplayStar->makeActorDead();

            makeActorDead();
               }
       }
}
