#include <stdio.h>
int main(){
    int Age, CreditScore;
    float Income;
    
    printf("Enter your age: ");
    scanf("%d", &Age);
    printf("Enter your annual income: ");
    scanf("%f", &Income);
    printf("Enter your credit score: ");
    scanf("%d", &CreditScore);

    if (Age >= 18 && Income >= 50000 && CreditScore >= 600){
        printf("You are eligible for the loan\n");
    }else{
        printf("You are not eligible for the loan\n");
    }
    return 0;
}