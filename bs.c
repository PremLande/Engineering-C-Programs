#include<stdio.h>
void main()
{
	    int arr[100],i,element,n,match=0;
	    printf("Enter Size Of array");	
	    scanf("%d",&n);
		printf("enter array");
	    for(i=0;i<n;i++)
	{	
		scanf("%d",&arr[i]);
	}
		printf("ENTER ELEMENT TO FIND ");
		scanf("%d",&element);
		for(i=0;i<n;i++)
{
		if(arr[i]==element)

{
	match=1;
            break ;
}
}
	 if(match==1)
{
		printf("found at loc %d",arr[n]);
}
		else
		printf("NOT FOUND \n",arr[i]);

}

