#include <stdio.h>
int main()
{
   #ifdef USE_SYSCALL
        printf("Hello Syscall\n");
   #else
        printf("Hello World\n");
   #endif
   return 0;
}

