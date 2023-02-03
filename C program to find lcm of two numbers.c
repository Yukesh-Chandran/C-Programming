// C program to find lcm of two numbers
#include<stdio.h>
int main(){
    int num1,num2,lcm,fact;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&num1,&num2);
    lcm =(num1>num2)?num1:num2;
    fact= 1;
    while(fact){
        if(lcm % num1==0 && lcm % num2 == 0 ){
            printf("The LCM of the given numbers is %d",lcm);
            fact = 0;
        }
    }
    
    return 0;
}
