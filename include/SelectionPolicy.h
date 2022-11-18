#pragma once

class SelectionPolicy {
public:
    virtual int choose(Simulation &s,vector<int> invitations,int selectingAgentId, int PartyId);
};

class MandatesSelectionPolicy: public SelectionPolicy{ };

class EdgeWeightSelectionPolicy: public SelectionPolicy{ };

