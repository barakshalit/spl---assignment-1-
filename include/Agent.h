#pragma once

#include <vector>
#include "Graph.h"

class SelectionPolicy;

class Agent
{
public:
    Agent(int agentId, int partyId, SelectionPolicy *selectionPolicy);
    Agent(const Agent &other);

    int getPartyId() const;
    int getId() const;
    void step(Simulation &);

    int Agentcoalition;
    int getAgentCoalition;

private:
    int mAgentId;
    int mPartyId;
    SelectionPolicy *mSelectionPolicy;

};
