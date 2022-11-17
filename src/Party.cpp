#include "Party.h"

Party::Party(int id, string name, int mandates, JoinPolicy *jp) : mId(id), mName(name), mMandates(mandates), mJoinPolicy(jp), mState(Waiting) 
{
    this.iter = 0;
}

State Party::getState() const
{
    return mState;
}

void Party::setState(State state)
{
    mState = state;
}

int Party::getMandates() const
{
    return mMandates;
}

const string & Party::getName() const
{
    return mName;
}

void Party::step(Simulation &s)
{
    if(this.getState() != Joined){
       if (this.getState() == Waiting) {
           if(Partyinvitations.size() != 0){
               setState(CollectingOffers);
               this.iter++;
           }
       }
       if (this.iter == 2){
           this.iter++;
           ///choosing with selection policy(my party id,simuation)
       }
    }

}

void Party::setPartyCoalition(int x){
    this.Partycoalition = x;
}

int Party::getPartyCoalition(){
    return this.partyCoalition;
}

void reciveInvitation(int partyId){
    Partyinvitations.push_back(partyId);
}
