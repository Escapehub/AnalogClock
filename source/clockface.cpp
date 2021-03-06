#include "../header/clockface.h"

ClockFace::ClockFace(float width, float height)
{
    this->m_face = new sf::CircleShape(height / 2);
    this->m_face->setFillColor(sf::Color::White);

    this->m_second = new Hand(width, height, HAND_SECOND);
    this->m_second->setFillColor(sf::Color::Black);

    this->m_minute = new Hand(width, height, HAND_MINUTE);
    this->m_minute->setFillColor(sf::Color::Blue);

    this->m_hour = new Hand(width, height, HAND_HOUR);
    this->m_hour->setFillColor(sf::Color::Red);
}

void ClockFace::Draw(sf::RenderWindow& window)
{
    window.draw(*m_face);
    window.draw(*m_second);
    window.draw(*m_minute);
    window.draw(*m_hour);
}