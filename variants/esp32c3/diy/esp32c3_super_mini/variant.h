#ifndef VARIANT_LLCC68_SUPERMINI_H
#define VARIANT_LLCC68_SUPERMINI_H

// === 1. ЧИП: SX1276 (RF95), а не SX1262 ===
#define USE_RF95

// === 2. РАСПИНОВКА SPI (соответствует твоей пайке) ===
#define LORA_SCK     4
#define LORA_MISO    5
#define LORA_MOSI    6
#define LORA_CS      7

// === 3. УПРАВЛЕНИЕ ===
#define LORA_RESET   10
#define LORA_DIO1    3      // DIO1 = IRQ для RF95 (SX1276)

// === 4. ОТКЛЮЧАЕМ ВСЁ, ЧТО НУЖНО ТОЛЬКО ДЛЯ SX1262 ===
// (эти строки можно не писать, но оставим для совместимости, чтобы не ломать сборку)
#define SX126X_TXEN RADIOLIB_NC
#define SX126X_RXEN RADIOLIB_NC
// BUSY, DIO2, DIO3, TCXO — не определяем вообще

// === 5. СИСТЕМНЫЕ НАСТРОЙКИ ПЛАТЫ ===
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

#endif // VARIANT_LLCC68_SUPERMINI_H
