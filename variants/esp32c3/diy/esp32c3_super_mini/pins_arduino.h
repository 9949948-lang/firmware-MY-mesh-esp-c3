#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

// Стандартные UART-пины для ESP32-C3 Super Mini
static const uint8_t TX = 21;
static const uint8_t RX = 20;

// I2C
static const uint8_t SDA = 1;
static const uint8_t SCL = 0;

// SPI (по умолчанию, но Meshtastic использует пины из variant.h)
// ВАЖНО: мы убрали опасные strapping-пины 8 и 9, 
// чтобы не было конфликта с LoRa-модулем при загрузке.
static const uint8_t SS = 7;
static const uint8_t MOSI = 6;
static const uint8_t MISO = 5;
static const uint8_t SCK = 4;

// Аналоговые входы
static const uint8_t A0 = 0;
static const uint8_t A1 = 1;
static const uint8_t A2 = 2;
static const uint8_t A3 = 3;
static const uint8_t A4 = 4;
static const uint8_t A5 = 5;

#endif /* Pins_Arduino_h */
