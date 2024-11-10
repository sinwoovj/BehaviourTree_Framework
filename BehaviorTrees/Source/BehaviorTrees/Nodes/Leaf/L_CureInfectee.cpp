
#include <Stdafx.h> // important!!

#include "L_CureInfectee.h"

namespace BT
{
	void L_CureInfectee::OnInitial(NodeData* nodedata_ptr)
	{
	}

	Status L_CureInfectee::OnEnter(NodeData* nodedata_ptr)
	{
		return Status::BT_READY;
	}

	void L_CureInfectee::OnExit(NodeData* nodedata_ptr)
	{
	}

	Status L_CureInfectee::OnUpdate(float dt, NodeData* nodedata_ptr)
	{
		return Status::BT_RUNNING;
	}

	Status L_CureInfectee::OnSuspend(NodeData* nodedata_ptr)
	{
		return Status::BT_SUSPEND;
	}


}