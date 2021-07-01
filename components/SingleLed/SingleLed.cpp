#include "SingleLed.hpp"
#include <SFML/Graphics.hpp>

sf::RectangleShape *square = nullptr;

void SingleLed::initLED(){
  square = new sf::RectangleShape(sf::Vector2f(20.f, 70.f));
  square->setPosition(sf::Vector2f(10.f, 10.f));
  square->setFillColor(sf::Color::Red);
}

void SingleLed::deinitLED(){
  delete square;
}

void SingleLed::turnLEDoff_() { square->setFillColor(sf::Color::Red); }

void SingleLed::turnLEDon_() { square->setFillColor(sf::Color::Red); }
