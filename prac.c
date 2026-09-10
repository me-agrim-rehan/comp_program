#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code below this 
// cmd + shift + b for save and run 
  

    int x;
    scanf("%d",&x);
    (x%7==0) ? printf("%d" , (int)(x*4.0)) : printf("%0.4f",(x/3.0) ) ;


    return 0;
}