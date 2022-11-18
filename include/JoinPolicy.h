#pragma once

class JoinPolicy {
public:
    virtual int Join(vector<int> invitations,int AgentId,Simulation &s);
};

class MandatesJoinPolicy : public JoinPolicy {};

class LastOfferJoinPolicy : public JoinPolicy {};


