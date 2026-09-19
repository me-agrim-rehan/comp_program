#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code below this 
// cmd + shift + b for save and run 
  
// Write a program to print all numbers from N down to 1 using a while loop.
//  Input: N = 5  Output: 5 4 3 2 1

    int N;
    scanf("%d", &N);
    int i = N;
    while(i>0){
        printf("%d ",i--);
    }
    return 0;


}