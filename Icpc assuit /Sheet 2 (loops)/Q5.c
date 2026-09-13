#include <stdio.h>
int main(){
    int count;
    int i=1;
    scanf("%d",&count);
     int max = 0;
    while(i<=count){

        int n;
        scanf("%d", &n);
        if(n>=max){
            max = n;
        }

        i++;

    }
    printf("%d",max);
}