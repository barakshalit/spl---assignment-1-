#include "Simulation.h"

Simulation::Simulation(Graph graph, vector<Agent> agents) : mGraph(graph), mAgents(agents) 
{
    Simulation::mCoalition = getPartiesByCoalitions();
    }

void Simulation::step()
{
    for(int i = 0; i < mGraph.getNumVertices(); i++){
        mGraph.getParty(i).step(*this);
    }

    for(int i = 0; i < mAgents.size(); i++){
        mAgents[i].step(*this);
    }
}

bool Simulation::shouldTerminate() const
{
    bool noCoalition = true;
    for(int i = 0; i<mCoalition.size();i++){
        int totalMan = 0;
        for(int j = 0; i<mCoalition[i].size() & totalMan >= 61 ;j++){
            totalMan += mGraph.getParty(mCoalition[i][j]).getMandates();
        }
            if (totalMan >= 61){
                noCoalition = false;
        }

    }
    vector<Party> parties = mGraph.getVertices();
    bool joined = true;
    for(int i = 0; i<parties.size() & joined;i++){
        if (parties[i].getState() != Joined){
            joined = false;
        }
    }

    return (!noCoalition | joined);
}

const Graph &Simulation::getGraph() const
{
    return mGraph;
}

const vector<Agent> &Simulation::getAgents() const
{
    return mAgents;
}

const Party &Simulation::getParty(int partyId) const
{
    return mGraph.getParty(partyId);
}

/// This method returns a "coalition" vector, where each element is a vector of party IDs in the coalition.
/// At the simulation initialization - the result will be [[agent0.partyId], [agent1.partyId], ...]
const vector<vector<int>> Simulation::getPartiesByCoalitions() const
{
        for(int i = 0; i<mAgents.size();i++){
            mAgents[i].setAgentCoalition(i);
            mAgents[i].getParty().setPartyCoalition(i);

            vector<int> currCoalition;
            currCoalition.push_back(mAgents[i].getPartyId());
            mCoalition.push_back(currCoalition);


    }
    vector<int> partyInv;
    for(int i = 0; i< mCoalition.size();i++){
        partyInv.push_back(0);
    }
    for(int i = 0; i< mGraph.getVertices().size();i++){
        mGraph.getParty(i).coalitionInv = partyInv;
    }

    return vector < vector < int >> ();
}

