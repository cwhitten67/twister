#include <stdio.h>
#include <stdlib.h>

main()
{
       clrscrn2(0x1F);       
       poscurs(1, 1); 
       printf("\\");
       Delay(12);
       writestr("|", 1, 1, 0x1F);
       Delay(12);
       writestr("/", 1, 1, 0x1F);
       Delay(12);
       writestr("-", 1, 1, 0x1F);
       poscurs(1, 1); 
       printf("\\");
       Delay(12);
       writestr("|", 1, 1, 0x1F);
       Delay(12);
       writestr("/", 1, 1, 0x1F);
       Delay(12);
       writestr("-", 1, 1, 0x1F);
       main();
}

