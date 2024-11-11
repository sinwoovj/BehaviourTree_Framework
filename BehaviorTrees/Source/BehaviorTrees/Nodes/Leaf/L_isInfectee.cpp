
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
		AgentBTDataList& agentlist = g_trees.GetAllAgentsBTData();
		for (auto& it : agentlist)
		{
			GameObject* go = it->GetGameObject();
			if (go->GetType() == OBJECT_Enemy)
				return Status::BT_SUCCESS;
		}
		return Status::BT_FAILURE;
	}

	Status L_isInfectee::OnSuspend(NodeData* nodedata_ptr)
	{
		return Status::BT_SUSPEND;
	}


}