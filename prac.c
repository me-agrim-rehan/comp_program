#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code below this 
// cmd + shift + b for save and run 
  
// Write a program that takes two numbers and an operator symbol (+, -, *, /) and performs the corresponding operation using switch-case on the operator. Input: 10 4 *  Output: 40



    int N;
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        printf("%d ",i);
    }
    return 0;

}