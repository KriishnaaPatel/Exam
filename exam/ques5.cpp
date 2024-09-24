#include<stdio.h>
int main(){
    int num;
    int count=0;
    printf("Enter Any Number: ");
    scanf("%d",&num);
    while(num!=0){
        num/=10;
        count++;
    }
    printf("Total numbers of digits: %d\n",count);
    return 0;
}
