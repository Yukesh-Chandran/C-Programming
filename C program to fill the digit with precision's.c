#include<stdio.h>
int main(){
  int precision;
  float number;
  scanf("%d %f",precision,number);
  printf("%.*f",precision,number);
  return 0;
}
         
