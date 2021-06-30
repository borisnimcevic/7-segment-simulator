#ifndef _SINGLELED_H_
#define _SINGLELED_H_

enum ledState{
  OFF = 0,
  ON = 1,
};

class SingleLed {
private:
  ledState state;
  unsigned dutyCycle_ms;

public:
  // Constructor and Destructor
  SingleLed(ledState state = OFF, unsigned dutyCycle_ms = 500);
  virtual ~SingleLed();

  // Getters
  const bool getState() const;
  const unsigned getDutyCycle() const;


  // Setters
  inline void setON();
  inline void setOFF();
  void toggleState();
};

#endif //_SINGLELED_H_
