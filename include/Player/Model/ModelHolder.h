#pragma once

#include "LiveActor/LiveActor.h"

class ModelHolder : public LiveActor
{
public:
	ModelHolder(const char *, bool);

	virtual ~ModelHolder();

	void updateMtx(MtxPtr);
};
