#include "../header/hand.h"

Hand::Hand(float height, int hand)
{
    switch (hand)
    {
        case HAND_SECOND:
            this->setSize(sf::Vector2f((height / 2) - 50, 40));
            break;
        
        case HAND_MINUTE:
            this->setSize(sf::Vector2f((height / 2) - 80, 40));
            break;
        
        case HAND_HOUR:
            this->setSize(sf::Vector2f((height / 2) - 100, 40));
            break;
    }
}

void Hand::Increment()
{
    this->rotate(360 / 60);
}