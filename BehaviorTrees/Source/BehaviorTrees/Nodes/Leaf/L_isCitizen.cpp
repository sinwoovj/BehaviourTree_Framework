
#include <Stdafx.h> // important!!

#include "L_isCitizen.h"

namespace BT
{
	void L_isCitizen::OnInitial(NodeData* nodedata_ptr)
	{
	}

	Status L_isCitizen::OnEnter(NodeData* nodedata_ptr)
	{
		return Status::BT_READY;
	}

	void L_isCitizen::OnExit(NodeData* nodedata_ptr)
	{
	}

	Status L_isCitizen::OnUpdate(float dt, NodeData* nodedata_ptr)
	{
		return Status::BT_RUNNING;
	}

	Status L_isCitizen::OnSuspend(NodeData* nodedata_ptr)
	{
		return Status::BT_SUSPEND;
	}


}