#ifndef _SINGLELED_H_
#define _SINGLELED_H_

class SingleLed {
private:
  bool state;

public:
  // Constructor and Destructor
  SingleLed();
  virtual ~SingleLed();

  // Getters
  bool getState() const;

  // Setters
  void setON();
  void setOFF();
  void toggleState();
};

#endif //_SINGLELED_H_
