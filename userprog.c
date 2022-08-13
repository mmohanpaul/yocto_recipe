#include <stdio.h>
int main()
{
   #ifdef USE_SYSCALL
        printf("Hello Yocto World\n");
   #else
        printf("Hello World\n");
   #endif
   return 0;
}

