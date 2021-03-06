#include "header/clockface.h"
#include "header/timer.h"

int main() 
{
    sf::RenderWindow window(sf::VideoMode(1080, 1080), "Space Invaders");
    Timer t = Timer();
    pClockFace clockface = new ClockFace(window.getSize().y);

    t.setInterval([&]() {
        clockface->getHand()->Increment();
    }, 1000);

    while(window.isOpen()) 
    {
    sf::Event event;
    while (window.pollEvent(event)) 
    {
        if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            window.close();

        if (event.type == sf::Event::KeyPressed) 
        {
            if (event.key.code == sf::Keyboard::Space) 
            {
                
            }
        }
    }
        window.clear();
        clockface->Draw(window);
        window.display();
    }

    return EXIT_SUCCESS;
}