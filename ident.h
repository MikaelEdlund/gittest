#ifndef IDENT_H
#define IDENT_H
  #define IDENT(value) const char __attribute__((unused,weak)) * RCSid = value
#endif
