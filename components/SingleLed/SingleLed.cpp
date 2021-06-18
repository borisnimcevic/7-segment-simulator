#include "SingleLed.hpp"

// Constructor and Destructor
SingleLed::SingleLed(ledState state) { this->state = state; }

SingleLed::~SingleLed() {}

// Getters
bool SingleLed::getState() const { return this->state; }

// Setters
void SingleLed::setON() { this->state = ON; }

void SingleLed::setOFF() { this->state = OFF; }

void SingleLed::toggleState() {
  if (state)
    this->setOFF();
  else
    this->setON();
}
