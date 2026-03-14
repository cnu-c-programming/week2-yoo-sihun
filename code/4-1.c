#include <stdio.h>

int main()
{
    int a, b;
    char op;
    
    if (scanf("%d %d %c", &a, &b, &op) != 3) return 0;

    if (op == '+') printf("%d", a + b);
    else if (op == '-') printf("%d", a - b);
    else if (op == '*') printf("%d", a * b);
    else if (op == '/') {
        if (b != 0) printf("%d", a / b);
    }
    
    return 0;
}

