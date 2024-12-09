#include<stdio.h>
void main(){
    int num;
    int firstNum;
    int lastNum;

    printf("enter the number");
    scanf("%d",&num);

    lastNum=num%10;

    while (num!=0)
    {
        firstNum=num;
        num=num/10;
    }

    printf("sum of first & last digit= %d",firstNum+lastNum);
}