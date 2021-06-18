#ifndef _DISPLAYDRIVER_H_
#define _DISPLAYDRIVER_H_

#include "SingleLed.hpp"
#include <SFML/Graphics.hpp>

class Display {
private:
  sf::RenderWindow *window;
  sf::RectangleShape *square;
  sf::Event event;
  SingleLed *led;

  // Functions
  void initializeWindow();
  void initializeLED();
  void pollEvents();
public:
  // Constructor & Destructor
  Display(SingleLed *led = nullptr);
  virtual ~Display();

  // Functions
  void show() const;
  void attachLED(SingleLed *led);
  void update();

  // Accessors
  const bool isDisplayOpen() const;
};

#endif // _DISPLAYDRIVER_H_
