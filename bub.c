#include<stdio.h>

int main()
{
int a[99],n,i,j,t,k;

printf("enter n");
scanf("%d",&n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("\nenter nums\n");

for(i=0;i<n;i++)
{
for(k=0;k<n-i-1;k++)
{
if(a[k]>a[k+1])
{
t=a[k];
a[k]=a[k+1];
a[k+1]=t;
}



}


printf("\n pass %d \n",i+1);
for(j=0;j<n;j++)
printf("%d ",a[j]);

}


printf("\n********\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);

return 0;


}
