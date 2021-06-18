#include "DisplayDriver.hpp"
#include "SingleLed.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <unistd.h>

int main() {

  sf::Clock clock;
  SingleLed led;
  Display display(&led);

  while (display.isDisplayOpen()) {
    if (clock.getElapsedTime().asMilliseconds() > led.getDutyCycle()) {
      clock.restart();
      led.toggleState();
    }

    display.update();
    display.show();
  }

  return EXIT_SUCCESS;
}
