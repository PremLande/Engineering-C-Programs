#include<stdio.h>
void bs(int [],int,int,int);
int main()
{
	int a[100],x,n,l=0,h,i;
	printf("Ente size of array");
	scanf("%d",&n);
	h=(n-1);
	printf("ENTER ARRAY ELELEMT");
	for(i=0;i<n;i++)

	{
		scanf("%d",&a[i]);
	}
	printf("ENTER  ELEMENT TO BE SEARCHED ");
	scanf("%d",&x);


//bubble




bs(a,h,l,x);
return 0;

}
void bs(int a[],int h,int l,int x)
{
	int mid;
	if(l>h)
	{
		printf("NOT PRESENT");
		return;
	}
	mid=(h+l)/2;
	if(a[mid]==x)
	{
		printf("ELEMENT FOUDN %d",x);
	}
	else if(a[mid]<x)
	bs(a,h,mid+1,x);
	else 
	bs(a,mid-1,l,x);
}
