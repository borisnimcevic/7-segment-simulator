#include <iostream>
#include <SFML/Graphics.hpp>
#include "SingleLED.hpp"
#include <unistd.h>

static const unsigned BLINK_RATE_ms = 200;

int main() {

  // Window:
  sf::RenderWindow window(sf::VideoMode(200, 200), "7-segment simulator");
  window.setFramerateLimit(30);

  SingleLED led1(50.f, 50.f, 100.f, sf::Color::Yellow);

  // Clock:
  sf::Clock clock;
  auto currentTime = clock.getElapsedTime();
  auto previousTime = clock.getElapsedTime();

  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      switch (event.type) {
      case sf::Event::Closed:
        window.close();
        break;

      case sf::Event::KeyPressed:
        if (event.key.code == sf::Keyboard::Escape)
          window.close();
        break;

      default:
        // Nothing for now. It is just here so compiler doesn't complain about
        // unhandled events in the switch.
        break;
      }
    }

    currentTime = clock.getElapsedTime();
    if (currentTime.asMilliseconds() >
        (previousTime.asMilliseconds() + BLINK_RATE_ms)) {
      previousTime = currentTime;
      led1.toggleLED();
    }

    window.clear();
    window.draw(led1.getLED());
    window.display();
  }

  return 0;
}
