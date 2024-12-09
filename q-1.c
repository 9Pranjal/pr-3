#include<stdio.h>
void main(){
    char cha='a';
    do{
        printf("\n%c",cha);
        cha+=2;
    }
    while (cha<='z');
}