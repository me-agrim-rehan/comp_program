// Write a program to check whether a given year is a leap year (divisible by 4, but not by 100 unless also by 400). Input: 2024  Output: Leap Year
#include <stdio.h>
int main(){
    int yr;
    scanf("%d",&yr);
    if(yr%4==0 ){
        if(yr%100!=0){
                printf("Leap year");
        }else{
            printf("Not leap year");
        }
    }else{
        printf("Not leap year");
    }

}