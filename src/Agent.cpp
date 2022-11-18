#include "Agent.h"


Agent::Agent(int agentId, int partyId, SelectionPolicy *selectionPolicy) : mAgentId(agentId), mPartyId(partyId), mSelectionPolicy(selectionPolicy)
{
    // You can change the implementation of the constructor, but not the signature!
}

///copy constructor
Agent:: Agent(const Agent &other, Simulation &s):mPartyId(other.getPartyId()),mSelectionPolicy(other.mSelectionPolicy){
    int i = s.getAgents().size() + 1;
    this->mAgentId = i;

}
int Agent::getId() const
{
    return mAgentId;
}

int Agent::getPartyId() const
{
    return mPartyId;
}

void Agent::step(Simulation &sim)
{
    vector<int> neighbors = sim.mGraph.getneighbors(this->getPartyId());
    for(int i = 0; i< neighbors.size();i++){
        if(neighbors[i] == this->getAgentCoalition() | sim.mGraph.getParty(neighbors[i]).getState() == Joined | sim.mGraph.getParty(neighbors[i]).coalitionInv[this->getAgentCoalition()] == 1){
            neighbors.erase(neighbors.begin() + i - 1);/// check what position to make?
        }
    }
    mSelectionPolicy->choose(s,neighbors, this->getId(),this->getPartyId());



}

void Agent:: setAgentCoalition(int x){
    this.Agentcoalition = x;
}


int Agent::getAgentCoalition(){
    return this.AgentCoalition;
}

