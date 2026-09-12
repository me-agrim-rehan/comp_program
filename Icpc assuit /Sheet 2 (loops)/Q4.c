#include <stdio.h>
int main(){
    int pass = 1999;
    int i = 0;
    int n;
    do{
        scanf("%d",&n);
        if(n!=pass){
            printf("Wrong\n");
        }else{
            printf("Correct");
            break;
        }
    }while(n!=pass);
}