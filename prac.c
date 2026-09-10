#include <stdio.h>
int main() {
    int x;
    scanf("%d",&x);
    (x%7==0) ? printf("%d" , (int)(x*4.0)) : printf("%0.4f",(x/3.0) ) ;
    return 0;
}