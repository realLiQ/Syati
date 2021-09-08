#pragma once

#include "JSystem.h"
#include "System/Resource/ResourceHolder.h"
#include "LiveActor.h"

class DummyDisplayModel
{
public:

	virtual ~DummyDisplayModel();
    void init(const JMapInfoIter);

    void makeActorAppeared();
    void makeActorDead();
    void control();
    void calcAndSetBaseMtx();
    void tryCreateDummyModel(LiveActor*, const JMapInfoIter &, s32, int); //requires tryCreateDummyModel__17DummyDisplayModelRFP9LiveActorRC12JMapInfoIterli=0x80295440
    void PowerStarSetupColor(const NameObj*, s32);
};

namespace MR {
    DummyDisplayModel* createDummyDisplayModel(LiveActor *, const JMapInfoIter &, s32, const TVec3f &, const TVec3f &);
    DummyDisplayModel* createDummyDisplayModel(LiveActor *, const JMapInfoIter &, const char *, s32);
    DummyDisplayModel* createDummyDisplayModel(LiveActor *, const JMapInfoIter &, MtxPtr, s32, const TVec3f &, const TVec3f &);
    DummyDisplayModel* createDummyDisplayModelCrystalItem(LiveActor *, JMapInfoIter const &, const TVec3f &, const TVec3f &);
    DummyDisplayModel* createDummyDisplayModelCrystalItem(LiveActor *, s32, const TVec3f &, const TVec3f &);
    DummyDisplayModel* getDummyDisplayModelId(const JMapInfoIter &, s32);
    DummyDisplayModel* getDummyDisplayModelId(const LiveActor*);

    void PowerStarSetupColor(LiveActor*, bool, int); //not part of DummyDisplayModel but it's needed for the PowerStarSpawner.
};