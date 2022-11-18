#pragma once
#include <string>

using std::string;

class JoinPolicy;
class Simulation;

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
    void setPartyCoalition();
    int getPartyCoalition();
    int Partycoalition;
    std::vector<int> Partyinvitations;
    std::vector<int> coaltionInv; ///array of coalition that helps to see which coalitions already inv me




private:
    int mId;
    string mName;
    int mMandates;
    JoinPolicy *mJoinPolicy;
    State mState;
    int iter;
};
