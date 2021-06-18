#include "DisplayDriver.hpp"

void Display::initializeWindow() {
  this->window =
      new sf::RenderWindow(sf::VideoMode(200, 200), "7-segment simulator");
  this->window->setFramerateLimit(30);
  this->window->clear();
}

void Display::initializeLED() {
  this->square = new sf::RectangleShape(sf::Vector2f(20.f, 70.f));
  this->square->setPosition(sf::Vector2f(10.f, 10.f));
  this->square->setFillColor(sf::Color::Red);
}

Display::Display(SingleLed *led) { 
  this->led = led;
  initializeWindow();
  initializeLED();
}

Display::~Display() {
  delete this->window;
  delete this->square;
}

void Display::show() const{
  this->window->clear();

  if(this->led->getState())
    this->square->setFillColor(sf::Color::Red);
  else
    this->square->setFillColor(sf::Color::Black);

  this->window->draw(*this->square);
  this->window->display();
}

void Display::attachLED(SingleLed *led){
  this->led = led;
}

const bool Display::isDisplayOpen() const{
  return this->window->isOpen();
}

void Display::pollEvents() {
  while (this->window->pollEvent(this->event)) {
    switch (event.type) {
    case sf::Event::Closed:
      this->window->close();
      break;

    case sf::Event::KeyPressed:
      if (event.key.code == sf::Keyboard::Escape)
        this->window->close();
      break;

    default:
      // Nothing for now. It is just here so compiler doesn't complain about
      // unhandled events in the switch.
      break;
    }
  }
}

void Display::update(){
  this->pollEvents();
}
