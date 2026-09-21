#include <stdio.h>
#include <stdbool.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code below this 
// cmd + shift + b for save and run 
  
// Write a program to check whether a given number is prime using a loop.
 // Input: 29  Output: Prime

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