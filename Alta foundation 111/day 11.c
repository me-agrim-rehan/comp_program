// Write a program that takes two numbers and an operator symbol (+, -, *, /) and performs the corresponding operation using switch-case on the operator. Input: 10 4 *  Output: 40

#include <stdio.h>

int main() {
    int a, b;
    char c;

    scanf("%d %d %c", &a, &b, &c);

    if (c == '*') {
        printf("%d", (a*b));
    } else if (c == '+') {
        printf("%d", (a+b));
    } else if (c == '-') {
        printf("%d", (a-b));
    } else if (c == '/' && b != 0) {
        printf("%d", (a/b));
    }

    return 0;
}