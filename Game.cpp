#include "Game.h"
#include <iostream>

Game::Game(Player& player1, Player& player2)
    : m_player1{player1}, m_player2{player2}, m_score1{0}, m_score2{0} {}

void Game::play(int numRounds) {
    std::cout << "Starting game between " << m_player1.getName() << " and " << m_player2.getName() << std::endl;
    for (int round = 1; round <= numRounds; ++round) {
        std::cout << "Round " << round << std::endl;
        Choice choice1 = m_player1.makeChoice();
        Choice choice2 = m_player2.makeChoice();
        std::cout << m_player1.getName() << " chooses " << choice1.getName() << std::endl;
        std::cout << m_player2.getName() << " chooses " << choice2.getName() << std::endl;
        m_player1.setOpponentLastChoice(choice2);
        m_player2.setOpponentLastChoice(choice1);
        if (choice1.beats(choice2)) {
            std::cout << m_player1.getName() << " wins the round!" << std::endl;
            ++m_score1;
        } else if (choice2.beats(choice1)) {
            std::cout << m_player2.getName() << " wins the round!" << std::endl;
            ++m_score2;
        } else {
            std::cout << "It's a tie!" << std::endl;
        }
    }
    std::cout << "Final score:" << std::endl;
    std::cout << m_player1.getName() << ": " << m_score1 << std::endl;
    std::cout << m_player2.getName() << ": " << m_score2 << std::endl;
    if (m_score1 > m_score2) {
        std::cout << m_player1.getName() << " wins the game!" << std::endl;
    } else if (m_score2 > m_score1) {
        std::cout << m_player2.getName() << " wins the game!" << std::endl;
    } else {
        std::cout << "The game is a tie!" << std::endl;
    }
}
