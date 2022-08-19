#pragma once
#include<iostream>
using namespace std;
class Team
{
 public:
    int numberofPlayers;
    int overs;
    string* team;

public:
    Team(int players, int overs) {
        this-> numberofPlayers = players;
        this->overs = overs;
        team = new string[numberofPlayers];
    }

    void setBattingorder();

};

