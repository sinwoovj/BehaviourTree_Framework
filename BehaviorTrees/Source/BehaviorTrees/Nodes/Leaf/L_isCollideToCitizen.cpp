
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
		return LeafNode::OnSuspend(nodedata_ptr);
	}


}