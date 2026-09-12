#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int j = 0,h = 0;
    int p = 0,q = 0;
    
    for(int i= 0;i<num;i++){
        int n;
        scanf("%d",&n);
            
        if(n%2==0){
                j=j+1;
            }else{
                h=h+1;}

        if(n>0){
            p++;
        }else if(n==0){
            continue;
        }
        else{
            q++;
        }

    }
    printf("Even: %d\n",j);
    printf("Odd: %d\n",h);
    printf("Positive: %d\n",p);
    printf("Negative: %d",q);
}