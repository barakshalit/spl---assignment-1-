#pragma once

#include <vector>
#include "Graph.h"

///my addings
#include "SelectionPolicy.h"

class SelectionPolicy;
class Simulation;

class Agent
{
public:
    Agent(int agentId, int partyId, SelectionPolicy *selectionPolicy);
    ///copy constructor:
    Agent(const Agent &other, Simulation &s);

    int getPartyId() const;
    int getId() const;
    void step(Simulation &s);

    int Agentcoalition;
    int getAgentCoalition();
    void setAgentCoalition(int x);

private:
    int mAgentId;
    int mPartyId;
    SelectionPolicy *mSelectionPolicy;

};
