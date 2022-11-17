Q

#include "JoinPolicy.h"

void MandatesJoinPolicy::Join(vector<int> x,int PartyId,Simulation &s){
    int max= 0;
    int currWinner = 0;
    for(i=0;i<x.size();i++){
        int temp = mGraph.getParty(i).getMandates();
        if  temp > max {
                    max = temp;
                    currWinner = vector[i];
            }
    }
    simulation.mCoalition[mGraph.getParty(currWinner).getPartyCoalition()].push_back(PartyId);
    mGraph.getParty(PartyId).partyCoalition = mGraph.getParty(currWinner).getPartyCoalition();
