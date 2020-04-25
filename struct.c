#include<stdio.h>

struct student{

int roll;
char name[20];
};
struct student s[100];
void main(){
int i,n;
struct student s[100];
printf("enter no of student ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("enter roll ");
scanf("%d",&s[i].roll);

printf("enter name ");
scanf("%s",s[i].name);
}

printf("\n\n**********************\n\n");
for(i=0;i<n;i++){
printf("roll num=%d\t",s[i].roll);
printf("name=%s",s[i].name);
}
}


