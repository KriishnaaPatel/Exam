#include<stdio.h>
int main(){
int num1;
int num2;
int num3;
int min;
printf("Enter number 1 : ");
scanf("%d",&num1);
printf("Enter number 2 : ");
scanf("%d",&num2);
printf("Enter number 3 : ");
scanf("%d",&num3);
if(num1<num2){
    min=num1;
}
else if(num2<num3){
     min=num2;
}
else
{
     min=num3;
}
printf("min number : %d",min);
return 0;
}
