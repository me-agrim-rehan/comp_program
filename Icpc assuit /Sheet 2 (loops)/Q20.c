// Write a program that prints numbers from 1 to N, but for multiples of 3 print "Fizz" instead of the number, 
// for multiples of 5 print "Buzz", and for multiples of both print "FizzBuzz". Input: N = 15

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if(i%15==0){
            printf("FizzBuzz\n");
        }else if(i%5==0){
            printf("Buzz\n");
        }else if(i%3==0){
            printf("Fizz\n");
        }else{
            printf("%d\n",i);
        }
    }
    
    return 0;
}