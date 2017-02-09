//******************************************************************************************
// Pin Definitions
//******************************************************************************************

#define PIN_CREE_PWM   2
#define PIN_CREE_ONOFF 3
#define PIN_LED_RED    13
#define PIN_LED_GREEN  12

#define debugging true

//******************************************************************************************
// Global Variables
//******************************************************************************************

//******************************************************************************************
void setup() {
  pinMode(PIN_CREE_ONOFF,INPUT);
  pinMode(PIN_LED_RED,OUTPUT);
  pinMode(PIN_LED_GREEN,OUTPUT);
}

void loop() {
  if (digitalRead(PIN_CREE_ONOFF) == HIGH) {
    digitalWrite(PIN_LED_RED,LOW);
    digitalWrite(PIN_LED_GREEN,HIGH);
  } else {
    digitalWrite(PIN_LED_GREEN,LOW);
    digitalWrite(PIN_LED_RED,!digitalRead(PIN_LED_RED)); //causes it to blink
  }
  delay(350);
}
