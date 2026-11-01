#ifndef _COMPAT_PGMSPACE_H_
#define _COMPAT_PGMSPACE_H_

#if defined(ARDUINO_ARCH_ESP32) || defined(ARDUINO_ARCH_ESP8266) || defined(ESP32)
  #include_next <pgmspace.h>
#elif defined(ARDUINO_ARCH_AVR)
  #include <avr/pgmspace.h>
#else
  #include <stdint.h>

  #ifndef PROGMEM
  #define PROGMEM
  #endif

  #ifndef PGM_P
  #define PGM_P const char *
  #endif

  #ifndef PGM_VOID_P
  #define PGM_VOID_P const void *
  #endif

  #ifndef PSTR
  #define PSTR(s) (s)
  #endif

  #ifndef pgm_read_byte
  #define pgm_read_byte(addr) (*(const uint8_t *)(addr))
  #endif

  #ifndef pgm_read_word
  #define pgm_read_word(addr) (*(const uint16_t *)(addr))
  #endif

  #ifndef pgm_read_dword
  #define pgm_read_dword(addr) (*(const uint32_t *)(addr))
  #endif

  #ifndef pgm_read_ptr
  #define pgm_read_ptr(addr) (*(const void * const *)(addr))
  #endif

  #ifndef pgm_read_byte_near
  #define pgm_read_byte_near(addr) pgm_read_byte(addr)
  #endif

  #ifndef pgm_read_word_near
  #define pgm_read_word_near(addr) pgm_read_word(addr)
  #endif

  #ifndef pgm_read_dword_near
  #define pgm_read_dword_near(addr) pgm_read_dword(addr)
  #endif

  #ifndef pgm_read_ptr_near
  #define pgm_read_ptr_near(addr) pgm_read_ptr(addr)
  #endif

#endif // Konec detekce architektur
#endif // _COMPAT_PGMSPACE_H_
