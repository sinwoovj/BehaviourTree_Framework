
#include <Stdafx.h> // important!!

#include "L_FailureState.h"

namespace BT
{
	void L_FailureState::OnInitial(NodeData* nodedata_ptr)
	{
	}

	Status L_FailureState::OnEnter(NodeData* nodedata_ptr)
	{
		//return Status::BT_SUCCESS;
		return Status::BT_FAILURE;
	}

	void L_FailureState::OnExit(NodeData* nodedata_ptr)
	{
	}

	Status L_FailureState::OnUpdate(float dt, NodeData* nodedata_ptr)
	{
		return Status::BT_RUNNING;
	}

	Status L_FailureState::OnSuspend(NodeData* nodedata_ptr)
	{
		return Status::BT_SUSPEND;
	}


}