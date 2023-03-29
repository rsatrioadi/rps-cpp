#include "HumanPlayer.h"
#include <iostream>

HumanPlayer::HumanPlayer(const std::string& name)
    : Player{name} {}

Choice HumanPlayer::makeChoice() {
    std::cout << m_name << ", enter your choice (rock, paper, or scissors): ";
    std::string choiceName;
    std::cin >> choiceName;
    while (true) {
        for (std::size_t i = 0; i < 3; ++i) {
            if (s_choices[i].getName() == choiceName) {
                return s_choices[i];
            }
        }
        std::cout << "Invalid choice. Please enter rock, paper, or scissors: ";
        std::cin >> choiceName;
    }
}
