#include <stdio.h>

int main() {
    int a,b;
    int gcd = 1;
    scanf("%d %d", &a ,&b);
    for (int i = 1; i <= a && i<=b; i++)
    {
        if(a%i==0 && b%i==0){
            if(gcd<=i){
                gcd=i;
            }else{
                gcd=gcd;
            }
        }else{
            continue;
        }
    }
    printf("%d\n",gcd);
    
    return 0;
}