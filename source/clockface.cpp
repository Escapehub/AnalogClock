#include "../header/clockface.h"

ClockFace::ClockFace(float height)
{
    this->m_face = new sf::CircleShape(height / 2);
    this->m_face->setFillColor(sf::Color::Yellow);

    this->m_second = new Hand(height, HAND_SECOND);
    this->m_second->setFillColor(sf::Color::White);
}

void ClockFace::Draw(sf::RenderWindow& window)
{
    window.draw(*m_face);
    window.draw(*m_second);
}