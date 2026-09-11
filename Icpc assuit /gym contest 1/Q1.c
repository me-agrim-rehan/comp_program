// The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son. The T-shirt has a ticket that indicates a discount of 𝑋% and its price 𝑃 after the discount. She now wants to know the price before the discount to know if the discount was worthy. Help her! 

#include <stdio.h>

int main(){
    long long dis;
    long long price;
    float or;
    scanf("%lld %lld",&dis,&price);

    or = ((float)price*100)/(100-dis);
    printf("%.2f",or);
}

