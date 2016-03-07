#include <stdlib.h>
#include <stdio.h>

#include "cbreakpad.h"

void crash()
{
    volatile int* a = (int*)(NULL); *a = 1;
}

int main(int argc, char**argv)
{
    breakpad_init();
    crash();
    return 0;
}
