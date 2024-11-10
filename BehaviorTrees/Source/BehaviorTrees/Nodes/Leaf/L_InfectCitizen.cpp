
#include <Stdafx.h> // important!!

#include "L_InfectCitizen.h"

namespace BT
{
	void L_InfectCitizen::OnInitial(NodeData* nodedata_ptr)
	{
	}

	Status L_InfectCitizen::OnEnter(NodeData* nodedata_ptr)
	{
		return Status::BT_READY;
	}

	void L_InfectCitizen::OnExit(NodeData* nodedata_ptr)
	{
	}

	Status L_InfectCitizen::OnUpdate(float dt, NodeData* nodedata_ptr)
	{
		return Status::BT_RUNNING;
	}

	Status L_InfectCitizen::OnSuspend(NodeData* nodedata_ptr)
	{
		return Status::BT_SUSPEND;
	}


}