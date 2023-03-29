#ifndef PLAYER_H
#define PLAYER_H

#include "Choice.h"
#include <string>

class Player {
public:
    Player(const std::string& name);
    virtual Choice makeChoice() = 0;
    void setOpponentLastChoice(const Choice& choice);
    const std::string& getName() const;
    const Choice& getOpponentLastChoice() const;

protected:
    static const int NUM_CHOICES{3};
    static Choice s_choices[];
    std::string m_name;
    Choice m_opponentLastChoice;
};

#endif // PLAYER_H
