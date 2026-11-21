#include <Arduino.h>
void piscaLed(int pino, int tempo) {
digitalWrite(pino, LOW);
delay(tempo);
digitalWrite(pino, HIGH);
delay(tempo);
}
