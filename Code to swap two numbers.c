// Code to swap two numbers.
#include <stdio.h>
int main(){
    int a, b;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
   // printf("%d \n%d\n",a,b);
    int temp1,temp2;
    temp1 = a;
    a=b;
    b=temp1;
    printf("Firts Number: %d \nSecond Number: %d",a,b);
    return 0;
}
