#include <M5Stack.h>
const int ledPin1 = 4;
const int ledPin2 = 13;

void setup() {
  // setup pin 5 as a digital output pin
  pinMode (ledPin1, OUTPUT);
  pinMode (ledPin2, OUTPUT);
   Serial.begin(115200); 
}

void loop() {
  Serial.println("LED1 AN");
  digitalWrite (ledPin1, HIGH);
  delay(500); 
  digitalWrite (ledPin1, LOW);
  delay(500); 
  Serial.println("LED2 AN");
  digitalWrite (ledPin2, HIGH);
  delay(500); 
  digitalWrite (ledPin2, LOW);
  delay(500); 
  
  
}
