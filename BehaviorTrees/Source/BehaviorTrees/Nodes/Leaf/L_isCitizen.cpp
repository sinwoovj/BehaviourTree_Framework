
#include <Stdafx.h> // important!!

#include "L_isCitizen.h"

namespace BT
{
	void L_isCitizen::OnInitial(NodeData* nodedata_ptr)
	{
	}

	Status L_isCitizen::OnEnter(NodeData* nodedata_ptr)
	{
		/*
		//When get GO itself
		AgentBTData& agentdata = nodedata_ptr->GetAgentData();
		GameObject* self = agentdata.GetGameObject();
		//When Get All Go
		AgentBTDataList& agentlist = g_trees.GetAllAgentsBTData();
		for (auto& it : agentlist)
		{
			GameObject* go = it->GetGameObject();
			//get go's ID, Name, Loc
			objectID go_id = go->GetID();
			std::string go_name = go->GetName();
			float go_x = go->GetTargetPOS().x;
			float go_y = go->GetTargetPOS().y;
			float go_z = go->GetTargetPOS().z;
			//set Loc, Tiny's Col
			go->SetTargetPOS({ 0,0,0 });
			go->GetTiny().SetDiffuse(1.0f, 1.0f, 1.0f);
		}
		*/
		AgentBTDataList& agentlist = g_trees.GetAllAgentsBTData();
		for (auto& it : agentlist)
		{
			GameObject* go = it->GetGameObject();
			if (go->GetType() == OBJECT_NPC)
				return Status::BT_SUCCESS;
		}
		return Status::BT_FAILURE;
	}

	void L_isCitizen::OnExit(NodeData* nodedata_ptr)
	{
	}

	Status L_isCitizen::OnUpdate(float dt, NodeData* nodedata_ptr)
	{
		return BT_RUNNING;
	}

	Status L_isCitizen::OnSuspend(NodeData* nodedata_ptr)
	{
		return Status::BT_SUSPEND;
	}


}