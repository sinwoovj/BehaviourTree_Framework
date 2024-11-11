
#include <Stdafx.h> // important!!

#include "L_doctored.h"

namespace BT
{
	void L_doctored::OnInitial(NodeData* nodedata_ptr)
	{
	}

	Status L_doctored::OnEnter(NodeData* nodedata_ptr)
	{
		AgentBTData& agentdata = nodedata_ptr->GetAgentData();
		GameObject* self = agentdata.GetGameObject();
		if (self->GetType() == OBJECT_Player)
			return Status::BT_SUCCESS;
		else
			return Status::BT_FAILURE;
	}

	void L_doctored::OnExit(NodeData* nodedata_ptr)
	{
	}

	Status L_doctored::OnUpdate(float dt, NodeData* nodedata_ptr)
	{
		return Status::BT_RUNNING;
	}

	Status L_doctored::OnSuspend(NodeData* nodedata_ptr)
	{
		return Status::BT_SUSPEND;
	}


}