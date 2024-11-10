
#include <Stdafx.h> // important!!

#include "L_MoveToClosestCitizen.h"

namespace BT
{
	void L_MoveToClosestCitizen::OnInitial(NodeData* nodedata_ptr)
	{
	}

	Status L_MoveToClosestCitizen::OnEnter(NodeData* nodedata_ptr)
	{
		return Status::BT_READY;
	}

	void L_MoveToClosestCitizen::OnExit(NodeData* nodedata_ptr)
	{
	}

	Status L_MoveToClosestCitizen::OnUpdate(float dt, NodeData* nodedata_ptr)
	{
		return Status::BT_RUNNING;
	}

	Status L_MoveToClosestCitizen::OnSuspend(NodeData* nodedata_ptr)
	{
		return Status::BT_SUSPEND;
	}


}