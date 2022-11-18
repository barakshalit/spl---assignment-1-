#pragma once
#include <string>

using std::string;

class JoinPolicy;
class Simulation;

///my addition:
#include <vector>
using std::vector;

enum State
{
    Waiting,
    CollectingOffers,
    Joined
};

class Party
{
public:
    Party(int id, string name, int mandates, JoinPolicy *); 

    State getState() const;
    void setState(State state);
    int getMandates() const;
    void step(Simulation &s);
    const string &getName() const;

    ///added members
    void setPartyCoalition(int coalition);
    int getPartyCoalition();
    void reciveInvitation(int partyId);
    int Partycoalition;
    vector<int> Partyinvitations;
    vector<int> coaltionInv; ///array of coalition that helps to see which coalitions already inv me




private:
    int mId;
    string mName;
    int mMandates;
    JoinPolicy *mJoinPolicy;
    State mState;
    int iter;
};
