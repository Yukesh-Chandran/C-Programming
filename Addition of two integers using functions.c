#include<stdio.h>

/* Addition of twoIntegersusing Functions*/

int main(){
	
	int Sum,Num1,Num2;
	scanf("%d %d",&Num1,&Num2);
	
	Sum = Raja(Num1,Num2);
	printf("%d",Sum);
	
	return 0;
}
int Raja(int a,int b){
    int c;
	c = a + b;
	
	return c;
}
