#include "BeatLastPlayer.h"

BeatLastPlayer::BeatLastPlayer(const std::string& name)
    : Player{name} {}

Choice BeatLastPlayer::makeChoice() {
    if (m_opponentLastChoice.getName().empty()) {
        // If there is no known previous choice, pick a random one
        return s_choices[std::rand() % 3];
    }
    for (std::size_t i = 0; i < Player::NUM_CHOICES; ++i) {
        if (s_choices[i].beats(m_opponentLastChoice)) {
            return s_choices[i];
        }
    }
    // If there is no choice that beats the opponent's last choice, pick a random one
    return s_choices[std::rand() % 3];
}
