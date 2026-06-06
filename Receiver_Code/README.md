# ESP32 UART Receiver

This ESP32 acts as the UART receiver.

## Configuration

- RX Pin: GPIO16
- TX Pin: GPIO17
- Baud Rate: 9600
- Format: SERIAL_8N1

## Function

The receiver listens for UART messages and displays them on the Serial Monitor.

Before executing the setup function, declare the Rx and Tx pins for UART2 with the advantages of the multiplexer of the ESP32.

#define RXp2 16
#define TXp2 17
In the setup function, for communicating with the host (PC, laptop), initialize the default UART0 via the baud rate of 11500 bps (bits per second). Moreover, the Serial2.begin function assists us in communicating at a rate of 9600 bps with other microcontrollers. Configured SERIAL_8N1 for UART communication at 8 data bits with a parity bit (N) to detect errors and one stop bit. Pins 16 (RX) and 17 (TX) are used for UART2 communication and configured as RXp2 and TXp2.

void setup() {
// pc Serial Monitor        

Serial.begin(115200);                     // Here 115200 baud rate used for fast communication with other controllers

// UART COMMUNICATION

Serial2.begin(9600, SERIAL_8N1, RXD2, TXD2);     // Here 9600 baud rate use for both Arduino and Esp32

Serial.println("ESp32 Reciever Started");
In the loop function, UART (serial) sends a debug message to the host (PC, laptop). This message will be displayed in the serial monitor with a baud rate of 11500 bps. Now, the serial2.readString() function reads incoming data from UART2 (Serial2) as a string. Check if any data is received on UART2. If data is received, it reads the string and sends it to the Serial Monitor.

void loop() {
  if (Serial2.available() > 0) {
    String msg = Serial2.readStringUntil('\n'); // সম্পূর্ণ লাইনটি পড়বে
    Serial.print("Data Received: ");
    Serial.println(msg); // ওপার থেকে আসা আসল মেসেজটি প্রিন্ট করবে
  }
}
    <img width="908" height="297" alt="image" src="https://github.com/user-attachments/assets/12694a50-56ac-4463-8bd3-54db07bd0d88" />

