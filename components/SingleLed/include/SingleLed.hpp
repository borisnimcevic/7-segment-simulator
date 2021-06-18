#ifndef _SINGLELED_H_
#define _SINGLELED_H_

enum ledState{
  OFF = 0,
  ON = 1,
};

class SingleLed {
private:
  ledState state;

public:
  // Constructor and Destructor
  SingleLed(ledState state = OFF);
  virtual ~SingleLed();

  // Getters
  bool getState() const;

  // Setters
  void setON();
  void setOFF();
  void toggleState();
};

#endif //_SINGLELED_H_
