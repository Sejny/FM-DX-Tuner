#ifndef _FAKE_PGMSPACE_H_
#define _FAKE_PGMSPACE_H_

#include <stdint.h>

// Ignorování klíčového slova PROGMEM na 32bit systémech
#ifndef PROGMEM
#define PROGMEM
#endif

// Datové typy pro ukazatele na programovou paměť
#ifndef PGM_P
#define PGM_P const char *
#endif

#ifndef PGM_VOID_P
#define PGM_VOID_P const void *
#endif

// Makro pro řetězce ve flash paměti
#ifndef PSTR
#define PSTR(s) (s)
#endif

// Makra pro čtení dat z paměti (přímé přetypování ukazatele)
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

// Aliasy pro _near varianty (ty specificky vyžaduje tvůj chybový výpis)
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

#endif // _FAKE_PGMSPACE_H_
