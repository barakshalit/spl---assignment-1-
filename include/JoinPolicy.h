#pragma once

class JoinPolicy {};

class MandatesJoinPolicy : public JoinPolicy {};

class LastOfferJoinPolicy : public JoinPolicy {};


public:
    int Join(vector<int> x);