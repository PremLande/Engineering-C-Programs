#include<stdio.h>
void  main()
{
	int low,high,mid,n,i,arr[100],element;
	printf("Enter size of aaray\n");
	scanf("%d",&n);
	printf("Enter elements of aaray\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}		
	printf("Enter element to find in aaray\n");
	scanf("%d",&element);
	low=0;
	high=n-1;
	
	for(i=0;i<n;i++)
{
	mid=(low+high)/2;
	if(arr[mid]==element)
	{
		printf("ELEMENT FOUND AT LOC%d",mid+1);
		break;
	}
	else if(arr[mid]<element)
	{
		low=mid+1;
	}
	else if(arr[mid]>element)
	{
		high=mid-1;
	}
	else
	{
		printf("NOT found");
	}
}

}
