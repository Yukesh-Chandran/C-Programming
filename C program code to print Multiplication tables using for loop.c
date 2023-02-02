// C program code to print Multiplication tables using for loop.

#include<stdio.h>
int main(){
    int Number;
    printf("Enter the number of Rows: ");
    scanf("%d",&Number);
    if(Number >0 ){
    int Multiple;
    printf("Enter the multiple: ");
    scanf("%d",&Multiple);
    if( Multiple > 0){
    for(int i = 1; i<=Number;i++){
        int table = i * Multiple;
        printf("%d x %d = %d\n",i,Multiple,table);
    }
    }
    else printf("Wrong Input");
    }
     else {
        printf("Wrong inputs");
    }
    
    return 0;
    
}
