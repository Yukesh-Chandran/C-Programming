// Code to swap two numbers without using temp variable
#include<stdio.h>
int main(){
int a , b;
scanf("%d %d, &a,&b);
a=a+b;
b=a-b;
a=a-b;
Printf(%d %d, a,b);
return 0;
}
