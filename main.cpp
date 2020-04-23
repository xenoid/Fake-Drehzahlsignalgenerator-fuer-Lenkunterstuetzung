//    Fake-Drehzahlsignalgenerator fuer Lenkunterstuetzung    //
//                Ein Ergebnis langer Naechte                //

// Definition Output Pin
int pin=10;

// Delay between On and Off (ms!)
// -------------------------------------
// |   -> 5 ms | 100 Hz | 3000 U/min   |
// |   -> 7 ms |  71 Hz | 2100 U/min   |
// |   -> 3 ms | 165 Hz | 5000 U/min   |
// -------------------------------------
int sec = 5;

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
// This program simply turns "pin" ON and OFF
digitalWrite(pin,HIGH);
delay(sec);
digitalWrite(pin,LOW);
delay(sec);
}
