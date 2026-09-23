// Write a program that prints numbers from 1 to N but uses continue to skip printing any multiple of 3. 
// Input: N = 10  Output: 1 2 4 5 7 8 10
#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 1; i <=a; i++)
    {
        if (i%3==0)
        {
            continue;
        }else{
            printf("%d ",i);
        }
        
    }
    
    
    return 0;
}