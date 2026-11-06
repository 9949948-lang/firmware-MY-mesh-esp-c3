#ifndef VARIANT_LLCC68_SUPERMINI_H
#define VARIANT_LLCC68_SUPERMINI_H

// Настройка под чип SX1262 из присланного даташита Ebyte E22
#ifndef USE_SX1262
  #define USE_SX1262
#endif

#ifdef USE_SX1268
  #undef USE_SX1268
#endif
#ifdef USE_LLCC68
  #undef USE_LLCC68
#endif

// SPI-интерфейс LoRa строго по вашей финальной таблице (GPIO6 и GPIO7 на месте!)
#define SX126X_SCK     8   // Пин [ Л ] 4 (GPIO8)
#define SX126X_MISO    9   // Пин [ Л ] 5 (GPIO9)
#define SX126X_MOSI    6   // Пин [ п ] 7 (GPIO6)
#define SX126X_CS      7   // Пин [ п ] 8 (GPIO7)

#define LORA_SCK  SX126X_SCK
#define LORA_MOSI SX126X_MOSI
#define LORA_MISO SX126X_MISO
#define LORA_CS   SX126X_CS

#define SX126X_TXEN RADIOLIB_NC
#define SX126X_RXEN RADIOLIB_NC

// Линии управления строго по вашей таблице подключений
#define SX126X_BUSY  2   // Пин [ п ] 5 (GPIO2)
#define SX126X_RESET 3   // Пин [ л ] 8 (Физическая маркировка RST / GPIO3)
#define SX126X_DIO1  10  // Пин [ Л ] 7 (GPIO10)
#define LORA_DIO1    SX126X_DIO1

#define SX126X_DIO2_AS_RF_SWITCH     
#define SX126X_DIO3_TCXO_VOLTAGE 1.8 
#define SX126X_MAX_POWER 22

#define SPI_INTERFACES_COUNT 2
#define SPI_SCK    SX126X_SCK
#define SPI_MISO   SX126X_MISO
#define SPI_MOSI   SX126X_MOSI
#define SPI_CS     SX126X_CS

#define HAS_RADIO 1      
#define NO_OTA    1      
#define HAS_SCREEN   0
#define USE_GPS      0   
#define BUTTON_PIN 20

#endif // VARIANT_LLCC68_SUPERMINI_H
