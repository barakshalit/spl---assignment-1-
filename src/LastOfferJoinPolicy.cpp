
#include JoinPolicy.h
#include Simulation.h
#include Agent.h
virtual void LastOfferJoinPolicy::Join(vector<int> invitations,int AgentId,Simulation &s){

    simulation.mCoalition[mGraph.getParty(invitations[invitations.size() - 1]).getAgentCoalition()].push_back(PartyId);
    mGraph.getParty(PartyId).partyCoalition = mGraph.getParty(invitations[invitations.size() - 1]).getAgentCoalition();

    ///cloning the inv agent to the mAgents vector:
    Agent clone = Agent(s.getAgents()[AgentId]);
    s.getAgents().push_back(clone);


}
