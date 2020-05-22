#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include<ctime>
#include <limits>
#include <unistd.h>
#include "team.h"

class Game{
public:
    Game();
    int playersPerTeam;
    int maxballs;
    int totalPlayers;
    std::string players[11];
    bool isFirstInnings;
    Team teamA, teamB;
    Team *battingTeam, *bowlingTeam;
    Player *batsman, *bowler;

    void welcome();
    void enter();
    void pool();
    int takeIntegerInput();
    void selectPlayers();
    void showSelectedPlayers();
    void toss();
    void startFirstInnings();
    void initializePlayers();
    void playInnings();
    void bat();
    bool validateInningsScore();
    void scoreCard();
    void startSecondInnings();
    void bat2();
    void scoreCard2();
    void winner();
    void summary();
};


#endif // GAME_H_INCLUDED
