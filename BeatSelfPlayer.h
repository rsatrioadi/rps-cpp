#ifndef BEATSELFPLAYER_H
#define BEATSELFPLAYER_H

#include "Player.h"

class BeatSelfPlayer : public Player {
public:
    BeatSelfPlayer(const std::string& name);
    Choice makeChoice() override;
private:
    Choice m_lastChoice;
};

#endif // BEATSELFPLAYER_H
