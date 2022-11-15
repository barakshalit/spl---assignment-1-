#include "Simulation.h"

Simulation::Simulation(Graph graph, vector<Agent> agents) : mGraph(graph), mAgents(agents) 
{
    for(int i = 0, i<agents.size();i++){
        mCoalition[i].push_back(agents[i].partyid);
    }
}

void Simulation::step()
{
    for(int i = 0; i < graph.getNumVertices(); i++){
        graph.getparty(i).step(*this);
    }

    for(int i = 0; i < agents.size(); i++){
        agents[i].step(*this);
    }
}

bool Simulation::shouldTerminate() const
{
    //in here we need to check if all parties are "joined" / coalition with 61
    // TODO implement this method
    return true;
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
    // TODO: you MUST implement this method for getting proper output, read the documentation above.
    return mCoalition;
}
