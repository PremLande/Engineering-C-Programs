#include<stdio.h>
#include<stdlib.h>
void createLL(int num);


void insert_at_beg(int num);

void delete_at_beg(void);

int search(int num);

void print(void);

struct node{
int data;
struct node * next;
};
typedef struct node node;
node * head;


void insert_at_beg(int num);
{
	node * temp;
	if(head==NULL)
	{
		head=(node*)malloc(sizeof(node));
	head->data=num;
	head->next=null;
	}
else{
temp=head;
		head=(node*)malloc(sizeof(node));

head->data=num;
head->next=temp;
}
}

	

