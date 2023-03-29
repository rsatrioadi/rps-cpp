#include "HumanPlayer.h"
#include "BeatLastPlayer.h"
#include "Game.h"

#include <iostream>

int main() {
    HumanPlayer humanPlayer{"Human Player"};
    BeatLastPlayer beatLastPlayer{"Beats Last Player"};
    Game game{humanPlayer, beatLastPlayer};
    game.play(5);
    return 0;
}
