#include "game.h"

using namespace std;

int main()
{
    Game game;
    game.welcome();
    game.enter();
    game.pool();
    game.enter();
    game.selectPlayers();
    game.showSelectedPlayers();

    char temp;
    cout<<"Starting the toss..."<<endl;
    cin.get(temp);
    usleep(2000000);

    game.toss();
    game.startFirstInnings();
    game.startSecondInnings();
    game.winner();
    game.summary();
    return 0;
}
