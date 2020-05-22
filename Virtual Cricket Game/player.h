#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <string>

class Player
{
public:
    Player();
    std::string name;
    int index;
    int runsScored;
    int ballsPlayed;
    int ballsBowled;
    int runsGiven;
    int wicketsTaken;
};


#endif // PLAYER_H_INCLUDED
