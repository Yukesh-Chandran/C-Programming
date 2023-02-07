#include<stdio.h>
int main(){
    int number1,number2,number3,average,sum = 0;
    printf("Enter Number 1: ");
    scanf("%d",&number1);
    sum = sum + number1;
    printf("Enter Number 2: ");
    scanf("%d",&number2);
    sum = sum + number2;
    printf("Enter Number 3: ");
    scanf("%d",&number3);
    sum = sum + number3;
    average= sum /3;
    printf("The Average is %d",average);
    return 0;
    
}
