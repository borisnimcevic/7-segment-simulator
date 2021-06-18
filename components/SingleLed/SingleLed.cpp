#include "SingleLed.hpp"

// Constructor and Destructor
SingleLed::SingleLed(ledState state, unsigned dutyCycle_ms) { 
  this->state = state;
  this->dutyCycle_ms = dutyCycle_ms;
}

SingleLed::~SingleLed() {}

// Getters
const bool SingleLed::getState() const { return this->state; }

const unsigned SingleLed::getDutyCycle() const { return this->dutyCycle_ms; }

// Setters
void SingleLed::setON() { this->state = ON; }

void SingleLed::setOFF() { this->state = OFF; }

void SingleLed::toggleState() {
  if (state)
    this->setOFF();
  else
    this->setON();
}
