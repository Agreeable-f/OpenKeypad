
//Original Code from here(https://bit.ly/3vGVAlB)

// Button definitions
#define BUTTON_KEY1 's'                                        //assign q/e
//#define BUTTON_KEY2    
#define BUTTON_KEY3 'd'                                     //assign e/q
//#define BUTTON_KEY4                            
//#define BUTTON_KEY5 
//#define BUTTON_KEY6 
//#define BUTTON_KEY7 
//#define BUTTON_KEY8 
//#define BUTTON_KEY9 
 
// Pin definitions
#define BUTTON_PIN1 5                            
//#define BUTTON_PIN2 16
#define BUTTON_PIN3 15                              
//#define BUTTON_PIN4 5
//#define BUTTON_PIN5 6
//#define BUTTON_PIN6 7
//#define BUTTON_PIN7 8
//#define BUTTON_PIN8 9
//#define BUTTON_PIN9 10
//#define BUTTON_PIN10 
// ---------------------------------
 
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
 
// Button objects, organized in array
button buttons[] = {
  {BUTTON_KEY1, BUTTON_PIN1},
  {BUTTON_KEY3, BUTTON_PIN3},
  //{BUTTON_KEY3, BUTTON_PIN3},
  //{BUTTON_KEY4, BUTTON_PIN4},
  //{BUTTON_KEY5, BUTTON_PIN5},
  //{BUTTON_KEY6, BUTTON_PIN6},
  //{BUTTON_KEY7, BUTTON_PIN7},
  //{BUTTON_KEY8, BUTTON_PIN8},
  //{BUTTON_KEY9, BUTTON_PIN9},
};
 
const uint8_t NumButtons = sizeof(buttons) / sizeof(button);
const uint8_t ledPin = 17;

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
