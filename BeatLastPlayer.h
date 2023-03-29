#ifndef BEATLASTPLAYER_H
#define BEATLASTPLAYER_H

#include "Player.h"

class BeatLastPlayer : public Player {
public:
    BeatLastPlayer(const std::string& name);
    Choice makeChoice() override;
};

#endif // BEATLASTPLAYER_H
