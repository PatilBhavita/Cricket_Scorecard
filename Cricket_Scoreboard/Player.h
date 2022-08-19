#pragma once
class Player
{
public:

      int runs, balls, sixes, fours, pos;
public:
    Player()
    {
        runs = 0;
        balls = 0;
        sixes = 0;
        fours = 0;
        pos = 0;
    }
    void setRuns(int Runs);
    int getRuns();
    int getBalls();
    int getPos();
    int getSixes();
    int getFours();

};

