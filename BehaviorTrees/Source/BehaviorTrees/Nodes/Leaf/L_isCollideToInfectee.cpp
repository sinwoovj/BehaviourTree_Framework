
#include <Stdafx.h> // important!!

#include "L_isCollideToInfectee.h"

namespace BT
{
	/*--------------------------------------------------------------------------*
	Name:           GetLocalBlackBoard

	Description:    Get custom data pointer.

	Arguments:      None.

	Returns:        L_CollideToInfecteeData*:	custom node data pointer.
	*---------------------------------------------------------------------------*/
	L_CollideToInfecteeData* L_isCollideToInfectee::GetLocalBlackBoard(NodeData* nodedata_ptr)
	{
		return nodedata_ptr->GetLocalBlackBoard<L_CollideToInfecteeData>();
	}

	/*--------------------------------------------------------------------------*
	Name:           InitialLocalBlackBoard

	Description:    Initial custom data.

	Arguments:      None.

	Returns:        None.
	*---------------------------------------------------------------------------*/
	void L_isCollideToInfectee::InitialLocalBlackBoard(NodeData* nodedata_ptr)
	{
		nodedata_ptr->InitialLocalBlackBoard<L_CollideToInfecteeData>();
	}

	void L_isCollideToInfectee::OnInitial(NodeData* nodedata_ptr)
	{
		LeafNode::OnInitial(nodedata_ptr);

		InitialLocalBlackBoard(nodedata_ptr);
	}

	Status L_isCollideToInfectee::OnEnter(NodeData* nodedata_ptr)
	{
		AgentBTData& agentdata = nodedata_ptr->GetAgentData();
		GameObject* self = agentdata.GetGameObject();
		self->collideObj.clear();
		float col = false;
		dbCompositionList list;
		g_database.ComposeList(list, OBJECT_Enemy);

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
					(*i)->SetType(OBJECT_NPC);
					(*i)->GetTiny().SetDiffuse(1.0f, 1.0f, 1.0f);
				}
			}
		}
		return col ? Status::BT_SUCCESS : Status::BT_FAILURE;
	}

	void L_isCollideToInfectee::OnExit(NodeData* nodedata_ptr)
	{
	}

	Status L_isCollideToInfectee::OnUpdate(float dt, NodeData* nodedata_ptr)
	{
		return Status::BT_RUNNING;
	}

	Status L_isCollideToInfectee::OnSuspend(NodeData* nodedata_ptr)
	{
		return LeafNode::OnSuspend(nodedata_ptr);
	}


}