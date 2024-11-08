
#include <Stdafx.h> // important!!

#include "L_NewNode.h"

namespace BT
{
	void L_NewNode::OnInitial(NodeData* nodedata_ptr)
	{
	}

	Status L_NewNode::OnEnter(NodeData* nodedata_ptr)
	{
		return Status::BT_READY;
	}

	void L_NewNode::OnExit(NodeData* nodedata_ptr)
	{
	}

	Status L_NewNode::OnUpdate(float dt, NodeData* nodedata_ptr)
	{
		return Status::BT_RUNNING;
	}

	Status L_NewNode::OnSuspend(NodeData* nodedata_ptr)
	{
		return Status::BT_SUSPEND;
	}


}