
#include <Stdafx.h> // important!!

#include "L_infected.h"

namespace BT
{
	void L_infected::OnInitial(NodeData* nodedata_ptr)
	{
	}

	Status L_infected::OnEnter(NodeData* nodedata_ptr)
	{
		return Status::BT_READY;
	}

	void L_infected::OnExit(NodeData* nodedata_ptr)
	{
	}

	Status L_infected::OnUpdate(float dt, NodeData* nodedata_ptr)
	{
		AgentBTData& agentdata = nodedata_ptr->GetAgentData();
		GameObject* self = agentdata.GetGameObject();
		if (self->GetType() == OBJECT_Enemy)
			return Status::BT_SUCCESS;
		return Status::BT_FAILURE;
	}

	Status L_infected::OnSuspend(NodeData* nodedata_ptr)
	{
		return Status::BT_SUSPEND;
	}


}