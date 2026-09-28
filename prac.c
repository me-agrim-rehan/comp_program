//Code below this 
// cmd + shift + b for save and run 

#include <stdio.h>
#include <stdbool.h>

int add(int a, int b)
{
    return a + b;
}

float add2(float a, float b)
{
    return a + b;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    int a, b;
    float x, y;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);

    printf("Sum of integers = %d\n", add(a, b));
    printf("Sum of decimal numbers = %.2f\n", add2(x, y));

    return 0;

}











