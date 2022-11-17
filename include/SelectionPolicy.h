#pragma once

class SelectionPolicy { };

class MandatesSelectionPolicy: public SelectionPolicy{ };

class EdgeWeightSelectionPolicy: public SelectionPolicy{ };

public:
    int choose(vector<int> x);