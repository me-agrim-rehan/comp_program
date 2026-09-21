#include <stdio.h>

int main() {
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