#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,x;
    bool prime = true;
    scanf("%d", &a);
    
    for (int i = 2; i <= a; i++)

    {
     prime = true;
        for(int j = 2; j%i==0;j++){

            if(prime==false){
                printf("%d ",j);
            }
            
        }
    }

    return 0;
}