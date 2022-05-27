
//Original Code from here(https://bit.ly/3vGVAlB)

//Thanks Sunny for the edits :D

#include "Keyboard.h"
 
// Button helper class for handling press/release and debouncing
class button {
  public:
  const char key;
  const uint8_t pin;
 
  button(uint8_t k, uint8_t p) : key(k), pin(p){}
 
  void press(boolean state){
    if(state == pressed || (millis() - lastPressed  <= debounceTime)){
      return; // Nothing to see here, folks
    }
 
    lastPressed = millis();
 
    state ? Keyboard.press(key) : Keyboard.release(key);    
    pressed = state;
  }
 
  void update(){
    press(!digitalRead(pin));
  }
 
  private:
  const long debounceTime = 30;
  unsigned long lastPressed;
  boolean pressed = 0;
} ;
 
// ---------------------------------

// Add buttons to this array, in the form { key, pin }
button buttons[] = {
  //{' ', 1},
  //{' ', 2},
  //{' ', 3},
  //{' ', 4},
  {'z', 5},
  //{' ', 6},
  //{' ', 7},
  //{' ', 8},
  //{' ', 9},
  //{' ', 10},
  //{' ', 11},
  //{' ', 12},
  //{' ', 13},
  //{' ', 14},
  {'x', 15},
  //{' ', 16},
};
 
const uint8_t NumButtons = sizeof(buttons) / sizeof(button);
const uint8_t ledPin = 17;

// ---------------------------------

void setup() {
   // Safety check. Ground pin #1 (RX) to cancel keyboard inputs.
  pinMode(1, INPUT_PULLUP);
  if(!digitalRead(1)){
    failsafe();
  }
 
  // Set LEDs Off. Active low.
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, HIGH);
  TXLED0;
 
  for(int i = 0; i < NumButtons; i++){
    pinMode(buttons[i].pin, INPUT_PULLUP);
  }
}

void loop() {
 for(int i = 0; i < NumButtons; i++){
    buttons[i].update();
  }
}
 
void failsafe(){
  for(;;){} // Just going to hang out here for awhile :D
}
