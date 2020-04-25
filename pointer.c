#include<stdio.h>

void main(){

int a=10;
int *b;
b=&a;

printf("%d \t%d\n",a,b);
printf("%d \t%d",a,*b);
}
