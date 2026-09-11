#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int maxi = a;
    if(b>=a){
        printf("%d",b);
    }else if(c>=a){
        printf("%d",c);
    }else{
        return 0;
    }

    return 0;
}