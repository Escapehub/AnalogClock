#ifndef __CLOCKFACE__
#define __CLOCKFACE__

#include "hand.h"

class ClockFace
{
private:
    sf::CircleShape* m_face;
    pHand m_second;
public:
    ClockFace(float);

    void Draw(sf::RenderWindow&);

    pHand getHand() { return this->m_second; }
};

typedef ClockFace* pClockFace;

#endif //!__CLOCKFACE__