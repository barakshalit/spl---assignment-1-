#include "Agent.h"

Agent::Agent(int agentId, int partyId, SelectionPolicy *selectionPolicy) : mAgentId(agentId), mPartyId(partyId), mSelectionPolicy(selectionPolicy)
{
    // You can change the implementation of the constructor, but not the signature!
}
Agent:: Agent(const Agent &other): {

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
    vector<int> neighbors = getneighbors(this.getPartyId());
    for(int i = 0; i< neighbors.size();i++){
        if(neighbods[i] == this.getCoalition() | neighbors[i].getState() == Joined | neighbors[i].coalitionInv[this.getAgentCoalition] == 1){
            neighbors[i].erase();
        }
    }
    selectionPolicy.choose(neighbors, getPartyId());
    neighbors[i].coalitionInv[this.getAgentCoalition] = 1;

}

void Agent:: setAgentCoalition(int x){
    this.Agentcoalition = x;
}


int Party::getAgentCoalition(){
    return this.AgentCoalition;
}

