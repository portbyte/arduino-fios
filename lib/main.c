

#include "../lib/LowPower.h"

void setup() {
}

void loop() {
    LowPower.idle(SLEEP_8S, ADC_OFF, TIMER4_OFF, TIMER3_OFF, TIMER1_OFF, 
  		          TIMER0_OFF, SPI_OFF, USART1_OFF, TWI_OFF, USB_OFF);

}