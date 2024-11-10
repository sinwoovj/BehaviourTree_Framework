
#include <Stdafx.h> // important!!

#include "L_isCollideToCitizen.h"

namespace BT
{
	void L_isCollideToCitizen::OnInitial(NodeData* nodedata_ptr)
	{
	}

	Status L_isCollideToCitizen::OnEnter(NodeData* nodedata_ptr)
	{
		return Status::BT_READY;
	}

	void L_isCollideToCitizen::OnExit(NodeData* nodedata_ptr)
	{
	}

	Status L_isCollideToCitizen::OnUpdate(float dt, NodeData* nodedata_ptr)
	{
		return Status::BT_RUNNING;
	}

	Status L_isCollideToCitizen::OnSuspend(NodeData* nodedata_ptr)
	{
		return Status::BT_SUSPEND;
	}


}