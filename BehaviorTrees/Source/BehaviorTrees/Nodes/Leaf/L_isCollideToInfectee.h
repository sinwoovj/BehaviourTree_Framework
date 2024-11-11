/******************************************************************************/
/*!
\file		L_isCollideToInfectee.h
\project	CS380/CS580 AI Framework
\author		Shin-woo Choi
\summary	Condition: Check if you have collided with an infected person.

Copyright (C) 2016 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
*/
/******************************************************************************/

#pragma once

#include <vector>
#include <BehaviorTrees/BehaviorTreesShared.h>

namespace BT
{
	// node data for L_isCollideToInfectee, InfectCitizen
	struct L_CollideToInfecteeData : public NodeAbstractData
	{
		std::vector<GameObject*> collideInfectee;		// collided infectee to doctor
	};

	// selector node
	class L_isCollideToInfectee : public LeafNode
	{
	public:
		// Get custom data.
		L_CollideToInfecteeData* GetLocalBlackBoard(NodeData* nodedata_ptr);

		// Initial custom data.
		void InitialLocalBlackBoard(NodeData* nodedata_ptr);

	protected:
		// Only run when initializing the node
		virtual void OnInitial(NodeData* nodedata_ptr) override;
		// Only run when entering the node
		virtual Status OnEnter(NodeData* nodedata_ptr) override;
		// Only run when exiting the node
		virtual void OnExit(NodeData* nodedata_ptr) override;
		// Run every frame
		virtual Status OnUpdate(float dt, NodeData* nodedata_ptr) override;
		// Only run when node is in suspended
		virtual Status OnSuspend(NodeData* nodedata_ptr) override;
	};
}