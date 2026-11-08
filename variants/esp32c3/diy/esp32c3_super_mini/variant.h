#ifndef VARIANT_LLCC68_SUPERMINI_H
#define VARIANT_LLCC68_SUPERMINI_H

// === ЧИП: SX1276 (RF95) ===
#define USE_RF95

// === SPI (твоя пайка) ===
#define LORA_SCK     4
#define LORA_MISO    5
#define LORA_MOSI    6
#define LORA_CS      7

// === УПРАВЛЕНИЕ ===
#define LORA_RESET   10
#define LORA_DIO1    3

// === СИСТЕМНОЕ ===
#define SPI_INTERFACES_COUNT 2
#define SPI_SCK    LORA_SCK
#define SPI_MISO   LORA_MISO
#define SPI_MOSI   LORA_MOSI
#define SPI_CS     LORA_CS

#define HAS_RADIO 1
#define NO_OTA    1
#define HAS_SCREEN 0
#define USE_GPS      0
#define BUTTON_PIN 20

#endif
