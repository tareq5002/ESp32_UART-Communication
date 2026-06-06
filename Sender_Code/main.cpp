#include <Arduino.h>
#define RXD2 16
#define TXD2 17

void setup() {
  // pc Serial Monitor
  
  Serial.begin(115200);    // Here 115200 baud rate used for fast communication with other controllers

  // UART COMMUNICATION

   Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);             // Here 9600 baud rate use for both Arduino and Esp32
   Serial.println("ESp32 Sender Started");
   
     
}


void loop () {

  Serial2.println("Hello from ESp32 Sender");
  
  delay(2000);
}
