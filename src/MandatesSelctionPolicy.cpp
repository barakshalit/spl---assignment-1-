//
// Created by spl211 on 11/16/22.
//

#include "SelectionPolicy.h"

virtual void MandatesSelectionPolicy::choose(vector<int> neighbors,int selectingAgentId,int PartyId){
    int max= 0;
    int currWinner = 0;
    for(i=0;i<neighbors.size();i++){
        int temp = mGraph.getParty(i).getMandates();
        if  temp > max {
                    max = temp;
                    currWinner = vector[i];
            }
    }
    mGraph.getPartyId(winner).Partyinvitations(selectingAgentId);
}
