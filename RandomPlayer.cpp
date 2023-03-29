#include "RandomPlayer.h"

RandomPlayer::RandomPlayer(const std::string& name)
    : Player{name}, m_randomEngine{std::random_device{}()} {}

Choice RandomPlayer::makeChoice() {
    std::uniform_int_distribution<std::size_t> dist(0, 2);
    std::size_t index = dist(m_randomEngine);
    return s_choices[index];
}
