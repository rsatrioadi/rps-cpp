#ifndef GAME_H
#define GAME_H

#include "Player.h"

class Game {
public:
    Game(Player& player1, Player& player2);
    void play(int numRounds);

private:
    Player& m_player1;
    Player& m_player2;
    int m_score1;
    int m_score2;
};

#endif // GAME_H
