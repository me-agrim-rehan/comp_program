//Code below this 
// cmd + shift + b for save and run 

#include <stdio.h>



int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int n;
    scanf("%d",&n);

    // for(int i = n; i>1;){
       
    // }



     int i = n;
     while (i!=1)
     {
         if (i%2==0)
        {
            i=i/2;

        }else{

            i = (i*3)+1;
        }
        printf("%d ",i);


     }
     
}








