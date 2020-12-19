#include <RGB_LED.h>

RGB_LED LED(0,2,4);

void setup() 
{
  LED.setFunction(Fade);
}

void loop() 
{
   LED.run();
}
