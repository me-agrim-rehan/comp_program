#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code below this 
// cmd + shift + b for save and run 
  
    // Write a program that checks whether a given day, month, and year form a valid calendar date, 
        // using if-else to account for the correct number of days in each month and leap years for February. 
        // Input: 30 2 2024  Output: Invalid Date

    int days, mon, yrs;

    scanf("%d %d %d", &days, &mon, &yrs);
if(yrs>=1 && mon<=12 && mon>0){
    if(days > 31 || days<=0) {
        printf("Invalid Date");
    } else {
            if((yrs % 4 == 0 &&yrs % 100 != 0)|| yrs % 400 == 0) {
                if(mon == 2 && days <= 29) {
                    printf("valid Date");
                } else {
                    if((mon==1 ||mon==3 || mon==5 || mon==7 ||mon==8 ||mon==10 ||mon==12) && days<=31){
                        printf("Valid date");
                    }else{
                        if((mon==4 ||mon==6 || mon==9 || mon==11) && days<=30){
                        printf("Valid date");
                    }else{
                        printf("Invalid date");
                    }
                    }
                    
                }
            } else {
                if(mon == 2 && days > 28) {
                    printf("Invalid Date");
                } else if((mon==4 || mon==6 || mon==9 || mon==11) && days >=30){
                    printf("Invalid Date");
                }else{
                    printf("Valid Date");
                }
            }
    }
    }else{
    printf("Invalid Date");
}
}


