Q

#include "JoinPolicy.h"

virtual void MandatesJoinPolicy::Join(vector<int> invitations,int PartyId,Simulation &s) {
    int max = 0;
    int currWinner = 0;
    for (i = 0; i < invitations.size(); i++) {
        int temp = mGraph.getParty(invitations[i].getPartyId()).getMandates();
        if  temp > max{
                    max = temp;
                    currWinner = vector[i];
            }
    }
    simulation.mCoalition[mGraph.getParty(currWinner).getPartyCoalition()].push_back(PartyId);
    mGraph.getParty(PartyId).partyCoalition = mGraph.getParty(currWinner).getPartyCoalition();

    ///cloning agent:
    Agent clone = Agent(other);
    s.getAgents().push_back(clone);
}