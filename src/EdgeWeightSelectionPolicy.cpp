//
// Created by spl211 on 11/16/22.
//

#include "SelectionPolicy.h"
#include "Agents.h"

virtual void EdgeWeightSelectionPolicy::choose(Simulation &s, vector<int> x,int selectingAgentId, int PartyId){
    int max= 0;
    int currWinner = 0;
    for(i=0;i<x.size();i++){
        int temp = mGraph.getEdgeWeight(PartyId,x[i]);
        if  temp > max {
            max = temp;
            currWinner = vector[i];
        }
    }
    s.mGraph.getPartyId(winner).Partyinvitations(selectingAgentId);
    s.mGraph.getPartyId(winner).coaltionInv[s.mGrah.getAgents()[selectingAgentId].getCoalition();
}
