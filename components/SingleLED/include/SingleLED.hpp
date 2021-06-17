#ifndef _SINGLE_LED_H_
#define _SINGLE_LED_H_

#include <SFML/Graphics.hpp>

enum lightState {
  OFF = 0,
  ON = 1,
};

class SingleLED {
private:
  lightState state;
  float length;
  unsigned dutyCycle_ms;
  sf::Color color;
  sf::RectangleShape *led;
  sf::Vector2f position;

public:
  // Constructor & Destructor
  SingleLED(float pos_x = 0.f, float pos_y = 0.f, float length = 1,
            unsigned dutyCycle_ms = 500, sf::Color col = sf::Color::Red);
  virtual ~SingleLED();

  // Led control
  void turnOn();
  void turnOff();
  void toggleLED();

  // Setters and getter
  sf::RectangleShape *getLED() const;
  unsigned getDutyCycle() const;
};

#endif // _SINGLE_LED_H_