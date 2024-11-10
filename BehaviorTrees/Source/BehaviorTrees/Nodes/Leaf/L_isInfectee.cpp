
#include <Stdafx.h> // important!!

#include "L_isInfectee.h"

namespace BT
{
	void L_isInfectee::OnInitial(NodeData* nodedata_ptr)
	{
	}

	Status L_isInfectee::OnEnter(NodeData* nodedata_ptr)
	{
		return Status::BT_READY;
	}

	void L_isInfectee::OnExit(NodeData* nodedata_ptr)
	{
	}

	Status L_isInfectee::OnUpdate(float dt, NodeData* nodedata_ptr)
	{
		return Status::BT_RUNNING;
	}

	Status L_isInfectee::OnSuspend(NodeData* nodedata_ptr)
	{
		return Status::BT_SUSPEND;
	}


}