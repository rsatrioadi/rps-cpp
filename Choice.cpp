#include "Choice.h"

Choice::Choice(std::string name, std::string beats)
    : m_name{name}, m_beats{beats} {}

std::string Choice::getName() const {
    return m_name;
}

bool Choice::beats(const Choice& other) const {
    return m_beats == other.m_name;
}
