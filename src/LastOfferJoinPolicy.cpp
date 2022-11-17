
#include JoinPolicy.h

void MandatesJoinPolicy::Join(vector<int> x,int PartyId,Simulation &s){

    simulation.mCoalition[mGraph.getParty(x[x.size() - 1]).getPartyCoalition()].push_back(PartyId);
    mGraph.getParty(PartyId).partyCoalition = mGraph.getParty(x[x.size() - 1]).getPartyCoalition();

}
