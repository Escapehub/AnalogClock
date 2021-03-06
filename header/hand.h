#ifndef __HAND__
#define __HAND__

#include <SFML/Graphics.hpp>

#define HAND_SECOND Hand::HandType::SECOND
#define HAND_MINUTE Hand::HandType::MINUTE
#define HAND_HOUR Hand::HandType::HOUR

class Hand : public sf::RectangleShape
{
public:
    enum HandType { SECOND = 0, MINUTE = 1, HOUR = 2 };

private:
    int m_currentNumber;
    int m_faceNumbers;
public:
    Hand(float, float, int);

    void Increment();

    void setTime(int);

    int getCurrentNumber() { return this->m_currentNumber; }
};

typedef Hand* pHand;

#endif //!__HAND__