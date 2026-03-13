#include <stdio.h>

int main()
{
    usigned int x = 0x12345678;

    usinged char* addr = (unsigned char*)8x;

    printf("%x\n", *addr);
    printf("%x\n", *(addr + 1));
    printf("%x\n", *(addr + 2));
    printf("%x\n", *(addr + 3));
    
    return 0;
}

