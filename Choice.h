#ifndef CHOICE_H
#define CHOICE_H

#include <string>

class Choice {
public:
    Choice(std::string name, std::string beats);
    std::string getName() const;
    bool beats(const Choice& other) const;

private:
    std::string m_name;
    std::string m_beats;
};

#endif // CHOICE_H
