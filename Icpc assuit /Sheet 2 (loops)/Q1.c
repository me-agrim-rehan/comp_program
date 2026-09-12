
// Given a number N. Print numbers from 1 to N in separate lines.

#include <stdio.h>
int main(){
    long long num;
    scanf("%lld",&num);
    for(long long i = 0;i<num;i++){
        printf("%lld\n",i+1);
    }
}