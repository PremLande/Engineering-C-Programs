#include<stdio.h>
#define max 10

int push();
int pop();
//int display();
int stack[max],top=-1;
int main()
{

int ch;


printf("Enter 1.PUSH\n2.POP\n3.Display\n4.EXit");
scanf("%d",&ch);
while(ch!=4){

switch(ch){


	case 1:
		push();
		break;
   	case 2:
		pop();
		break;

	case 3:
		display()
		default:
		printf("wrong choice");
		exit();
}
}
void push(){
if(top==max)
printf("stack overflow");
else{
int data
printf("enter data");
scanf("%d",&data);
top++;
stack[top]=data;
}
}
void pop(){
if(top<-1)
printf("stack undeflow");
else{
int temp;
temp=stack[top];
top=top-1;
}
}
}

