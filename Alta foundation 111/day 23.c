#include <stdio.h>

void divide(int a, int b, int *quotient, int *remainder)
{
    *quotient = a / b;
    *remainder = a % b;
}

int main()
{
    int a, b;
    int quotient, remainder;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    divide(a, b, &quotient, &remainder);

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}