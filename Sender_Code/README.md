UART shows its fundamental behavior when transmitting data from the ESP32 to another microcontroller. A two-wire system is used here; one is Tx, which acts as a transmission line, while Rx is the receiving line. UART, the serial communication device, transfers and receives data bit by bit (mostly 8-bit data, including start and stop bit data frames).

The UART communication protocol is named after an asynchronous receiver-transmitter, which means this protocol allows asynchronous (not synchronous) transmission and reception of data between two devices with full duplex compatibility.


Actually, UART lets those devices communicate and transmit data without the same operating frequency (unlike synchronous communications, such as SPI or I2C), which is considered the main advantage of this communication protocol. For instance, two microcontrollers operating at different clock frequencies can communicate and transmit data between them easily via serial communication.

Data Frame: Instead of clock signals, UART relies on start and stop bits to indicate the beginning and end of the data, enabling the receiver to know when to begin and finish reading. The receiving UART accepts the start bit and begins reading the incoming bits at a particular rate known as the baud rate (bps). For successful communication, both UARTs require nearly the same baud rates, with a difference of no more than 10%. They must also be configured to recognize the same data formats. Optionally, a Parity Bit (1 bit) may be included for basic error checking, ensuring data integrity during transmission.

<img width="681" height="281" alt="image" src="https://github.com/user-attachments/assets/be9748be-ecfe-465b-bbcb-0fb1f473f686" />



# ESP32 UART Sender

This ESP32 acts as the UART transmitter.

## Configuration

- TX Pin: GPIO17
- RX Pin: GPIO16
- Baud Rate: 9600
- Format: SERIAL_8N1

## Function

The sender transmits the message:

Hello from ESP32 Sender

every 2 seconds through UART2.
