#ifndef CBREAKPAD_H
#define CBREAKPAD_H

typedef void* bpExceptionHandler;

#ifdef __cplusplus
extern "C" {
#endif

bpExceptionHandler breakpad_init();

#ifdef __cplusplus
}
#endif

#endif /* CBREAKPAD_H */
