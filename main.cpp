#include <iostream>
#include <SFML/Graphics.hpp>
#include "SingleLed.hpp"
#include <unistd.h>

int main() {

/*   // Window: */
/*   sf::RenderWindow window(sf::VideoMode(200, 200), "7-segment simulator"); */
/*   window.setFramerateLimit(30); */
/*   window.clear(); */

/*   SingleLED led1(50.f, 50.f, 100.f, 500, sf::Color::Red); */

/*   // Clock: */
/*   sf::Clock clock; */

/*   while (window.isOpen()) { */
/*     sf::Event event; */
/*     while (window.pollEvent(event)) { */
/*       switch (event.type) { */
/*       case sf::Event::Closed: */
/*         window.close(); */
/*         break; */

/*       case sf::Event::KeyPressed: */
/*         if (event.key.code == sf::Keyboard::Escape) */
/*           window.close(); */
/*         break; */

/*       default: */
/*         // Nothing for now. It is just here so compiler doesn't complain about */
/*         // unhandled events in the switch. */
/*         break; */
/*       } */
/*     } */

/*     if (clock.getElapsedTime().asMilliseconds() > led1.getDutyCycle()) { */
/*       clock.restart(); */
/*       led1.toggleLED(); */
/*     } */

/*     window.clear(); */
/*     window.draw(*led1.getLED()); */
/*     window.display(); */
/*   } */

/*   return 0; */
}
