#include "SingleLED.hpp"

SingleLED::SingleLED(float pos_x, float pos_y, float length, sf::Color col) {
  this->position.x = pos_x;
  this->position.y = pos_y;
  this->length = length;
  this->color = col;
  this->led = new sf::RectangleShape(sf::Vector2f(length, length / 5));
  this->led->setPosition(position);
}

SingleLED::~SingleLED() { delete this->led; }

void SingleLED::turnOn() {
  this->led->setFillColor(this->color);
  this->state = ON;
}

void SingleLED::turnOff() {
  this->led->setFillColor(sf::Color::Black);
  this->state = OFF;
}

void SingleLED::toggleLED() {
  if (state)
    turnOff();
  else
    turnOn();
}

sf::RectangleShape SingleLED::getLED(){
  return *led;
}
