#ifndef BI_IDENT_H
#define BI_IDENT_H

#ifdef __GNUC__
#define BI_IDENT(value) const char __attribute__((unused,weak)) * RCSid = value
#else
#define BI_IDENT(value) static char * RCSid = value
#endif

#endif
