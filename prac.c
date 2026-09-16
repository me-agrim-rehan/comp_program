#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code below this 
// cmd + shift + b for save and run 
  
// Write a program that takes two numbers and an operator symbol (+, -, *, /) and performs the corresponding operation using switch-case on the operator. Input: 10 4 *  Output: 40


    int a, b;
    char c;

    scanf("%d %d %c", &a, &b, &c);

    switch (c) {
        case '*':
            printf("%d", a * b);
            break;

        case '+':
            printf("%d", a + b);
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '/':
            if (b != 0) {
                printf("%d", a / b);
            }
            break;
    }

    return 0;
}