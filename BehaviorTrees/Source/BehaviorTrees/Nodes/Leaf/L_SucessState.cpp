
#include <Stdafx.h> // important!!

#include "L_SucessState.h"

namespace BT
{
	void L_SucessState::OnInitial(NodeData* nodedata_ptr)
	{
	}

	Status L_SucessState::OnEnter(NodeData* nodedata_ptr)
	{
		return Status::BT_READY;
	}

	void L_SucessState::OnExit(NodeData* nodedata_ptr)
	{
	}

	Status L_SucessState::OnUpdate(float dt, NodeData* nodedata_ptr)
	{
		return Status::BT_RUNNING;
	}

	Status L_SucessState::OnSuspend(NodeData* nodedata_ptr)
	{
		return Status::BT_SUSPEND;
	}


}