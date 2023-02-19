#include<stdio.h>
// temperature conversion 
int main(){
	float temp;
	char degree;
	float temperature;
	printf("Enter the Degree f 0r c :");
	scanf("%c",&degree);
	printf("Enter the Value: ");
	scanf("%f",&temp);
	//printf("%d",degree);
	
	if(degree == 'f' )
	{
	temperature = (temp - 32) * 5 /9;
	printf("The Temperature is %.2f Celcius",temperature);	
	}
	else if (degree == 'c')
	{
		temperature = (temp   * 9/5) + 32  ;
	printf("The Temperature is %.2f °F",temperature)	;
	}else 
	printf("Wrong Character");
	
	return 0;
}
