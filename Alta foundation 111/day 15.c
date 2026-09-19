// Write a program to check whether a given number is prime using a loop. Input: 29  Output: Prime
#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d", &N);
    bool prime = true;
    
    for (int i = 2; i < N; i++)
    {
        if(N%i==0){
            prime = false;
            break;
        }

    }

    if(prime == false){
        printf("Not prime");
    }else{
        printf("prime");
    
    
    return 0;
}
}