// Write a program to print all numbers from N down to 1 using a while loop. Input: N = 5  Output: 5 4 3 2 1

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int i = N;
    while(i>0){
        printf("%d\n",i--);
    }
    return 0;
}