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
    
public:
    Hand(float, int);

    void Increment();
};

typedef Hand* pHand;

#endif //!__HAND__