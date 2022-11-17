//
// Created by spl211 on 11/16/22.
//

#include "SelectionPolicy.h"

void EdgeWeightSelectionPolicy::choose(vector<int> x,int PartyId){
    int max= 0;
    int currWinner = 0;
    for(i=0;i<x.size();i++){
        int temp = mGraph.getEdgeWeight(PartyId,x[i]);
        if  temp > max {
            max = temp;
            currWinner = vector[i];
        }
    }
    mGraph.getPartyId(winner).Partyinvitations(PartyId);
}
