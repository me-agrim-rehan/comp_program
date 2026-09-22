#include <stdio.h>
#include <stdbool.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code below this 
// cmd + shift + b for save and run 
  

    int N;
    scanf("%d", &N);
    int b = 1;
    int a = 0;
    for (int i = 1; i <= N ; i++)
    {
        int c = a;
        int x = a + b;
        if(i==1){
        printf("%d ",a);
        continue;
        }
        if(i==2){
        printf("%d ",b);
        continue;
        }
        printf("%d ",x);
         a = b;
         b = x;
    }


    
    
    return 0;
}