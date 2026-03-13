#include <stdio.h>

int main()
{
    int var1 = 100;
    printf("int : %d\n", var1);
    printf("hex : %d\n", var1);
    printf("oct : %d\n", var1);

    char var2 = 'c';
    printf("char : %c\n", var2);

    char* var3 = "hello world!";
    printf("string : %s\n", var3);

    float var4 = 3.14592;
    printf("float : %f\n", var4);
    printf("exp : %lf\n", var4);

    
    return 0;
}
