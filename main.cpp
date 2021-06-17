#include <SFML/Graphics.hpp>
#include <iostream>
#include <unistd.h>

static const unsigned BLINK_RATE_ms = 200;

int main() {

  // Window:
  sf::RenderWindow window(sf::VideoMode(200, 200), "7-segment simulator");
  window.setFramerateLimit(30);

  // Shapes:
  auto position = sf::Vector2f(35.f, 35.f);
  auto size = sf::Vector2f(100.f, 10.f);
  auto red = sf::Color::Red;
  auto black = sf::Color::Black;
  bool ledState = true;

  sf::RectangleShape led;
  led.setFillColor(red);
  led.setPosition(position);
  led.setSize(size);

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
      ledState ^= true;
      if (ledState)
        led.setFillColor(red);
      else
        led.setFillColor(black);
    }

    window.clear();
    window.draw(led);
    window.display();
  }

  return 0;
}
