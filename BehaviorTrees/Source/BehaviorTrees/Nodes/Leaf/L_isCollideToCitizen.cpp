#include <iostream>
#include <Stdafx.h> // important!!

#include "L_isCollideToCitizen.h"

namespace BT
{
	/*--------------------------------------------------------------------------*
	Name:           GetLocalBlackBoard

	Description:    Get custom data pointer.

	Arguments:      None.

	Returns:        L_CollideToCitizenData*:	custom node data pointer.
	*---------------------------------------------------------------------------*/
	L_CollideToCitizenData* L_isCollideToCitizen::GetLocalBlackBoard(NodeData* nodedata_ptr)
	{
		return nodedata_ptr->GetLocalBlackBoard<L_CollideToCitizenData>();
	}

	/*--------------------------------------------------------------------------*
	Name:           InitialLocalBlackBoard

	Description:    Initial custom data.

	Arguments:      None.

	Returns:        None.
	*---------------------------------------------------------------------------*/
	void L_isCollideToCitizen::InitialLocalBlackBoard(NodeData* nodedata_ptr)
	{
		nodedata_ptr->InitialLocalBlackBoard<L_CollideToCitizenData>();
	}

	void L_isCollideToCitizen::OnInitial(NodeData* nodedata_ptr)
	{
		LeafNode::OnInitial(nodedata_ptr);

		InitialLocalBlackBoard(nodedata_ptr);
	}

	Status L_isCollideToCitizen::OnEnter(NodeData* nodedata_ptr)
	{
		bool col = false;
		AgentBTData& agentdata = nodedata_ptr->GetAgentData();
		GameObject* self = agentdata.GetGameObject();
		self->collideObj.clear();

		dbCompositionList list;
		g_database.ComposeList(list, OBJECT_NPC);

		dbCompositionList::iterator i;

		for (i = list.begin(); i != list.end(); ++i)
		{
			if ((*i)->GetID() != self->GetID())
			{
				if (IsNear((*i)->GetBody().GetPos(), self->GetBody().GetPos()))
				{
					//behavior
					col = true;
					self->collideObj.push_back((*i));
					(*i)->SetType(OBJECT_Enemy);
					(*i)->GetTiny().SetDiffuse(1.0f, 0.0f, 0.0f);
					std::cout << "__ " << self->GetBody().GetPos().x << " " << self->GetBody().GetPos().z << " | " << (*i)->GetBody().GetPos().x << " " << (*i)->GetBody().GetPos().z << std::endl;
				}
			}
		}
		return col ? Status::BT_SUCCESS : Status::BT_FAILURE;
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
		return LeafNode::OnSuspend(nodedata_ptr);
	}


}