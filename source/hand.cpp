#include "../header/hand.h"

Hand::Hand(float width, float height, int hand)
{
    switch (hand)
    {
        case HAND_SECOND:
            this->setSize(sf::Vector2f(40, (height / 2) - 50));
            this->m_faceNumbers = 60;
            break;
        
        case HAND_MINUTE:
            this->setSize(sf::Vector2f(40, (height / 2) - 80));
            this->m_faceNumbers = 60;
            break;
        
        case HAND_HOUR:
            this->setSize(sf::Vector2f(40, (height / 2) - 100));
            this->m_faceNumbers = 12;
            break;
    }

    this->setOrigin(sf::Vector2f(this->getSize().x / 2, this->getSize().y));
    this->setPosition(sf::Vector2f(width / 2, height / 2));
}

void Hand::Increment()
{
    this->rotate(360 / this->m_faceNumbers);
    this->m_currentNumber = (this->m_currentNumber + 1) % 60;
}

void Hand::setTime(int time)
{
    this->m_currentNumber = time;
    this->setRotation((360 / this->m_faceNumbers) * time);
}