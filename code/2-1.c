#include <stdio.h>

int main()
{
    printf("char: %lu\n", (unsigned long)sizeof(char));
    printf("short: %lu\n", (unsigned long)sizeof(short));
    printf("int: %lu\n", (unsigned long)sizeof(int));
    printf("unsigned int: %lu\n", (unsigned long)sizeof(unsigned int));
    printf("long: %lu\n", (unsigned long)sizeof(long));
    printf("long long: %lu\n", (unsigned long)sizeof(long long));
    printf("float: %lu\n", (unsigned long)sizeof(float));
    
    return 0;
}
