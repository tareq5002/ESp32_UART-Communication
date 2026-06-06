#include <Arduino.h>
#define RXD2 16
#define TXD2 17

void setup() {
// pc Serial Monitor        

Serial.begin(115200);                     // Here 115200 baud rate used for fast communication with other controllers

// UART COMMUNICATION

Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);     // Here 9600 baud rate use for both Arduino and Esp32

Serial.println("ESp32 Reciever Started");


}

void loop() {
  if (Serial2.available() > 0) {
    String msg = Serial2.readStringUntil('\n'); // সম্পূর্ণ লাইনটি পড়বে
    Serial.print("Data Received: ");
    Serial.println(msg); // ওপার থেকে আসা আসল মেসেজটি প্রিন্ট করবে
  }
}


