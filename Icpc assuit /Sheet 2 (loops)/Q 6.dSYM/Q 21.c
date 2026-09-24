#include <stdio.h>
#include <stdbool.h>

int main(){
 int n;
 scanf("%d",&n);
 int i = 0;
 int org;
 int rev = 0;
     org = n;
while(n>0){


    rev = rev * 10 + (n%10);
    n = n/10;

}
    printf("%d\n",rev);
    if(org==rev){
        printf("YES");
    }else{
        printf("NO");
    }
}