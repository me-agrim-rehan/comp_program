#include <stdio.h>

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

//Code below this 
// cmd + shift + b for save and run 
  

// Write a program that takes weight (kg) and height (m),
// computes BMI = weight / height^2, and categorizes it as Underweight (<18.5), Normal (18.5-24.9),
// Overweight (25-29.9), or Obese (30+) using nested if-else.

    #include <stdio.h>

    float wh;
    float h;
    scanf("%f", &h); 
    scanf("%f", &wh);

    float bmi = wh/(h*h);
    printf("Your bmi : %.1f\n",bmi);

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