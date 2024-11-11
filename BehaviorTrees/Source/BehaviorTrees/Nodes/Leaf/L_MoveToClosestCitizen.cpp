
#include <Stdafx.h> // important!!

#include "L_MoveToClosestCitizen.h"

namespace BT
{
	void L_MoveToClosestCitizen::OnInitial(NodeData* nodedata_ptr)
	{
	}

	Status L_MoveToClosestCitizen::OnEnter(NodeData* nodedata_ptr)
	{
		LeafNode::OnEnter(nodedata_ptr);

		GameObject* self = nodedata_ptr->GetAgentData().GetGameObject();
		GameObject* nearest = GetNearestCitizen(self);

		if (nearest)
		{
			self->SetTargetPOS(nearest->GetBody().GetPos());
			self->SetSpeedStatus(TinySpeedStatus::TS_JOG);
			SetTinySpeed(self);

			return Status::BT_RUNNING;
		}
		else
			return Status::BT_FAILURE;
	}

	void L_MoveToClosestCitizen::OnExit(NodeData* nodedata_ptr)
	{
	}

	Status L_MoveToClosestCitizen::OnUpdate(float dt, NodeData* nodedata_ptr)
	{
		LeafNode::OnUpdate(dt, nodedata_ptr);

		GameObject* self = nodedata_ptr->GetAgentData().GetGameObject();

		if (IsNear(self->GetBody().GetPos(), self->GetTargetPOS()))
			return Status::BT_SUCCESS;

		return Status::BT_RUNNING;
	}

	Status L_MoveToClosestCitizen::OnSuspend(NodeData* nodedata_ptr)
	{
		return Status::BT_SUSPEND;
	}


}