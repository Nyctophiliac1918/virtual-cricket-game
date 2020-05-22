#ifndef TEAM_H_INCLUDED
#define TEAM_H_INCLUDED
#include <vector>
#include "player.h"

class Team{
public:
    Team();
    std::string name;
    int totalRunsScored;
    int wicketsLost;
    int totalBallsBowled;
    std::vector<Player> players;
};

#endif // TEAM_H_INCLUDED
