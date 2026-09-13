#include <stdio.h>

int main() {
    float wh;
    float h;
    scanf("%f", &h); 
    scanf("%f", &wh);

    float bmi = wh/(h*h);

    if(bmi>=18.5 && bmi<=24.6){
        printf("Normal");
    }else if(bmi>=25 && bmi<=29.4){
        printf("Over weight");
    }else if(bmi>30){
        printf("Obese");
    }else{
        printf("Under weight");
    }

    
    
    return 0;
}