#include <stdio.h>

int main() {
    int count;
            int odd =0;

    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        int a,b;

        scanf("%d %d",&a,&b);
        if(a>b){
        for(int j=a ; j<b;j++){
            if(j%2!=0){

                odd += j;
            }
            

        }

            printf("%d\n",odd); 
            odd = 0;
    }else if(b>a){
        for (int i = 0; i < count; i++)
    {
        int a,b;

        scanf("%d %d",&a,&b);
        if(a>b){
        for(int j=b ; j<a;j++){
            if(j%2!=0){

                odd += j;
            }
            

        }

            printf("%d\n",odd); 
            odd = 0;
    }
    }



    return 0;
}}
}