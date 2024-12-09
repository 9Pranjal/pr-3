#include<stdio.h>
void main(){
    int num;
    int count=0;

    printf("enter the num");
    scanf("%d",&num);

    while (num!=0)
    {
        num=num/10;
        count++;   
    }
    
    printf("total number of digit= %d",count);
}