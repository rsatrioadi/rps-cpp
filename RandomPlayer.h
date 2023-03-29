#ifndef RANDOMPLAYER_H
#define RANDOMPLAYER_H

#include "Player.h"
#include <random>

class RandomPlayer : public Player {
public:
    RandomPlayer(const std::string& name);
    Choice makeChoice() override;

private:
    std::mt19937 m_randomEngine;
};

#endif // RANDOMPLAYER_H
