/******************************************************************************/
/*!
\file		BehaviorTreesDef.h
\project	CS380/CS580 AI Framework
\author		Chi-Hao Kuo
\summary	All include files for the project.

Copyright (C) 2016 DigiPen Institute of Technology.
Reproduction or disclosure of this file or its contents without the prior
written consent of DigiPen Institute of Technology is prohibited.
*/
/******************************************************************************/

#pragma once

#include <BehaviorTrees/BehaviorTreesShared.h>

#include <BehaviorTrees/BlackBoards/AgentAbstractData.h>
#include <BehaviorTrees/BlackBoards/NodeAbstractData.h>
#include <BehaviorTrees/BlackBoards/TinyBlackBoard.h>

#include <BehaviorTrees/AgentBehaviors.h>

#include <BehaviorTrees/Nodes/BehaviorNode.h>
#include <BehaviorTrees/TreeLogic.h>
#include <BehaviorTrees/NodeData.h>
#include <BehaviorTrees/AgentBTData.h>

#include <AIReasoner.h>
#include <BehaviorTrees/BehaviorTrees.h>

#include <BehaviorTrees/Nodes/ControlFlowNode.h>
#include <BehaviorTrees/Nodes/CompositeNode.h>
#include <BehaviorTrees/Nodes/ParallelNode.h>
#include <BehaviorTrees/Nodes/DecoratorNode.h>
#include <BehaviorTrees/Nodes/InterrupterNode.h>
#include <BehaviorTrees/Nodes/RepeaterNode.h>
#include <BehaviorTrees/Nodes/LeafNode.h>

// Add user-defined nodes definitions

/* Composite Nodes */

#include <BehaviorTrees/Nodes/ControlFlow/C_ParallelSequencer.h>
#include <BehaviorTrees/Nodes/ControlFlow/C_RandomSelector.h>
#include <BehaviorTrees/Nodes/ControlFlow/C_Sequencer.h>
#include <BehaviorTrees/Nodes/ControlFlow/C_Selector.h>

/* Decorator Nodes */

#include <BehaviorTrees/Nodes/Decorator/D_Delay.h>
#include <BehaviorTrees/Nodes/Decorator/D_Inverter.h>

/* Leaf Nodes */

#include <BehaviorTrees/Nodes/Leaf/L_MoveToFurthestTarget.h>

#include <BehaviorTrees/Nodes/Leaf/L_CheckMouseClick.h>
#include <BehaviorTrees/Nodes/Leaf/L_Idle.h>
#include <BehaviorTrees/Nodes/Leaf/L_MoveToMouseTarget.h>
#include <BehaviorTrees/Nodes/Leaf/L_MoveToRandomTarget.h>

#include <BehaviorTrees/Nodes/Leaf/L_isInfectee.h>
#include <BehaviorTrees/Nodes/Leaf/L_isCitizen.h>
#include <BehaviorTrees/Nodes/Leaf/L_isCollideToInfectee.h>
#include <BehaviorTrees/Nodes/Leaf/L_isCollideToCitizen.h>
#include <BehaviorTrees/Nodes/Leaf/L_infected.h>
#include <BehaviorTrees/Nodes/Leaf/L_CureInfectee.h>
#include <BehaviorTrees/Nodes/Leaf/L_InfectCitizen.h>
#include <BehaviorTrees/Nodes/Leaf/L_MoveToClosestCitizen.h>
#include <BehaviorTrees/Nodes/Leaf/L_SucessState.h>
#include <BehaviorTrees/Nodes/Leaf/L_FailureState.h>
