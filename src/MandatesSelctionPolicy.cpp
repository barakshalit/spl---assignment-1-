//
// Created by spl211 on 11/16/22.
//

#include "SelectionPolicy.h"

void MandatesSelectionPolicy::choose(vector<int> x,int PartyId){
    int max= 0;
    int currWinner = 0;
    for(i=0;i<x.size();i++){
        int temp = mGraph.getParty(i).getMandates();
        if  temp > max {
                    max = temp;
                    currWinner = vector[i];
            }
    }
    mGraph.getPartyId(winner).Partyinvitations(PartyId);
}
