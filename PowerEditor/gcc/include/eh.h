#ifndef EH_H

typedef void (*exFunc)(unsigned int, EXCEPTION_POINTERS *);

static void _set_se_translator(exFunc) {};

#endif //EH_H
