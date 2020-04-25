#include<stdio.h>
void main()
{
		int i,j,temp,k,n,arr[100];
		printf("enter array size");
		scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	for(i=0;i<n;i++)
	{
		for(k=0;k<n-i-1;k++)
		{
			if(arr[k]>arr[k+1])
				temp=arr[k];
				arr[k]=arr[k+1];
				arr[k+1]=temp;
		}
	}
for(i=0;i<n;i++)
printf("\n%d\n",arr[i]);
}
