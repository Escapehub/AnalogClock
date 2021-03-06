#ifndef __CLOCKFACE__
#define __CLOCKFACE__

#include "hand.h"

class ClockFace
{
private:
    sf::CircleShape* m_face;
    pHand m_second;
    pHand m_minute;
    pHand m_hour;
public:
    ClockFace(float, float);

    void Draw(sf::RenderWindow&);

    pHand getSecond() { return this->m_second; }
    pHand getMinute() { return this->m_minute; }
    pHand getHour() { return this->m_hour; }
};

typedef ClockFace* pClockFace;

#endif //!__CLOCKFACE__