#include <Timer/timer.h>
#include "header/clockface.h"

int main() 
{
    sf::RenderWindow window(sf::VideoMode(1080, 1080), "Clock");
    Timer t = Timer();
    pClockFace clockface = new ClockFace(window.getSize().x, window.getSize().y);

    std::time_t now = std::time(nullptr);
    std::tm tt = *std::localtime(std::addressof(now));

    clockface->getSecond()->setTime(tt.tm_min);
    clockface->getMinute()->setTime(tt.tm_min);
    clockface->getHour()->setTime(tt.tm_hour - 12);

    t.setInterval([&]() {
        clockface->getSecond()->Increment();

        if (clockface->getSecond()->getCurrentNumber() == 0)
        {
            clockface->getMinute()->Increment();

            if (clockface->getMinute()->getCurrentNumber() == 0)
                clockface->getHour()->Increment();
        }
    }, 1000);

    while(window.isOpen()) 
    {
        sf::Event event;
        while (window.pollEvent(event)) 
        {
        if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            window.close();
        }
        window.clear();
        clockface->Draw(window);
        window.display();
    }

    return EXIT_SUCCESS;
}