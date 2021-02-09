#ifndef BI_IDENT_H
#define BI_IDENT_H

#define BI_IDENT(value) const char __attribute__((unused,weak)) * RCSid = value

#endif
