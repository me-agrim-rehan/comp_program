#include <stdio.h>

int s(int a, int b)
{
    return a + b;
}

int f(int a)
{
    int i, r = 1;

    for (i = 1; i <= a; i++)
    {
        r = r * i;
    }

    return r;
}

int p(int a)
{
    int i;

    if (a < 2)
        return 0;

    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
            return 0;
    }

    return 1;
}

int l(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    int c, a, b, d;

    while (1)
    {
        printf("\n1. Sum of two numbers");
        printf("\n2. Factorial");
        printf("\n3. Prime check");
        printf("\n4. Largest of three numbers");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &c);

        switch (c)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Sum = %d\n", s(a, b));
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &a);
                printf("Factorial = %d\n", f(a));
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &a);

                if (p(a))
                    printf("Prime\n");
                else
                    printf("Not Prime\n");

                break;

            case 4:
                printf("Enter three numbers: ");
                scanf("%d %d %d", &a, &b, &d);
                printf("Largest = %d\n", l(a, b, d));
                break;

            case 5:
                printf("Exiting...");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}