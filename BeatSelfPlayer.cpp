#include "BeatSelfPlayer.h"

BeatSelfPlayer::BeatSelfPlayer(const std::string& name)
    : Player{name}, m_lastChoice{Choice("","")} {}

Choice BeatSelfPlayer::makeChoice() {
    // On the first choice, pick a random choice
    if (m_lastChoice.getName().empty()) {
        m_lastChoice = s_choices[std::rand() % 3];
    }
    for (std::size_t i = 0; i < 3; ++i) {
        if (m_lastChoice.beats(s_choices[i])) {
            m_lastChoice = s_choices[i];
            break;
        }
    }

    return m_lastChoice;
}
