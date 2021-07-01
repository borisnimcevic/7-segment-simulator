#ifndef _SINGLELED_H_
#define _SINGLELED_H_

enum ledState{
  OFF = 0,
  ON = 1,
};

class SingleLed {
private:
  // variables
  ledState state = OFF;
  unsigned dutyCycle_ms = 0;

  // functions
  void initLED();
  void deinitLED();
  void turnLEDoff_();
  void turnLEDon_();

public:
  // Constructor and Destructor
  SingleLed(ledState st = OFF, unsigned dt_ms = 500)
      : state(st), dutyCycle_ms(dt_ms) {
        initLED();
      }
  
  virtual ~SingleLed(){
    deinitLED();
  }

  // Getters
  const unsigned getDutyCycle() const { return dutyCycle_ms; }
  const bool getState() const { return state; }

  // Setters
  void setON() {
    state = ON;
    turnLEDon_();
  }

  void setOFF() {
    state = OFF;
    turnLEDoff_();
  }

  void toggleState() { state ? setOFF() : setON(); }
};

#endif //_SINGLELED_H_
