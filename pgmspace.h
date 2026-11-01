#ifndef _PROXY_PGMSPACE_H_
#define _PROXY_PGMSPACE_H_

#if __has_include(<avr/pgmspace.h>)
  #include <avr/pgmspace.h>
#else
  #include_next <pgmspace.h>
#endif
#endif
