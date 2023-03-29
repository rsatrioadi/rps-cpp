#include "Player.h"

Choice Player::s_choices[Player::NUM_CHOICES] = { Choice("rock", "scissors"), 
                               Choice("paper", "rock"), 
                               Choice("scissors", "paper") };

Player::Player(const std::string& name)
    : m_name{name}, m_opponentLastChoice{Choice("","")} {}

void Player::setOpponentLastChoice(const Choice& choice) {
    m_opponentLastChoice = choice;
}

const std::string& Player::getName() const {
    return m_name;
}

const Choice& Player::getOpponentLastChoice() const {
    return m_opponentLastChoice;
}
