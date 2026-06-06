The ESP32 is one of the most powerful microcontrollers with its 32-bit dual-core system. It’s become popular for Wi-Fi and Bluetooth features with a maximum 12-bit ADC and 160 MHz frequency. 
On the other hand, UART (Universal Asynchronous Receiver-Transmitter) is the simplest form of serial communication protocol with its point-to-point connection. 
In this tutorial, you’ll discover how to get started with UART with ESP32, explore its key features, and learn how to use it for real-world applications. 

ESP32 UART Pins
The ESP32 has 3 UARTs, such as UART0, UART1, and UART2. Though the Arduino environment only uses RX and TX, in the ESP32, we can use four pins: RX, TX, CTS, and RTS. However, we can reassign the UART to any pin without loss of performance for its multiplexer. The UARTs come preconfigured to use certain pins, but sometimes we have to change them depending on the demand of projects.

UART Port	TX	RX	RTS	CTS
UART0	1	3	22	19
UART1	10	9	11	6
UART2	17	16	7	8
Esp32 UART Usages and advantages
Data exchange: UART communication protocol in ESP32 assists in exchanging data with other microcontrollers (e.g., Arduino, STM32).

Peripheral Communicator: easily communicate with peripherals like actuators or modules like GSM/LTE modules (e.g., SIM800L, u-blox SARA-R4) and GPS modules (e.g., Neo-6M).

Full-Duplex Communication: Simultaneous transmission and reception of data.

Interrupt Handling: ESP32 provides robust interrupt-driven UART communication.

DMA Support: UART communication can use DMA (Direct Memory Access) for efficient data transfer without CPU involvement.
