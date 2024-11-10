
#include <Stdafx.h> // important!!

#include "L_isCollideToInfectee.h"

namespace BT
{
	void L_isCollideToInfectee::OnInitial(NodeData* nodedata_ptr)
	{
	}

	Status L_isCollideToInfectee::OnEnter(NodeData* nodedata_ptr)
	{
		return Status::BT_READY;
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
		return Status::BT_SUSPEND;
	}


}