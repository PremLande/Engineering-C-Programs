#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[99],n;
	int head,prev;
	int a_sort[99],last_index;
	int head_index,i,j,k;
	int direction,sum=0,temp,start,end;


	printf("Enter size of FCFS Queue\n");
	scanf("%d",&n);
	last_index=n;
	printf("\nEnter elements in queue.\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);

	printf("Enter current head position=\n");
	scanf("%d",&head);
	printf("Enter previous settled request.=\n");
	scanf("%d",&prev);
	direction=head-prev;
	printf("Enter start and end of disk=\n");
	scanf("%d %d",&start,&end);

	for(i=0;i<n;i++)
		a_sort[i]=a[i];
	a_sort[n]=head;

	for(i=0;i<=last_index;i++) {
		for(j=0;j<n-i;j++)
		{
			if(a_sort[j]>a_sort[j+1]){
				temp=a_sort[j];
				a_sort[j]=a_sort[j+1];
				a_sort[j+1]=temp;
			}
		}
	}

	for(i=0;i<=n;i++)
	{
		if(a_sort[i]==head)
			head_index=i;
	}
	if(direction>0)
	{
		for(i=head_index;i<n;i++)
			{
				sum=sum+abs(a_sort[i]-a_sort[i+1]);
				//printf("\n%d\n",sum);
			}
		sum=sum+abs(a_sort[last_index]-end);
		temp=abs(end-a_sort[head_index-1]);
		sum=sum+temp;


		for(i=head_index-1;i>0;i--)
			{
				sum=sum+abs(a_sort[i]-a_sort[i-1]);
			}

		printf("\ntotal head Moments=%d\n*****\n",sum);
	}
	else
		{
			for(i=head_index;i>0;i--)
				{
					sum=sum+abs(a_sort[i]-a_sort[i-1]);
					}
				sum+=abs(a_sort[0]-start);
				temp=abs(start-a_sort[head_index+1]);
				sum=sum+temp;	
				for(i=head_index+1;i<last_index;i++)
					{
						sum=sum+abs(a_sort[i]-a_sort[i+1]);
										}
				printf("\ntotal head Moments=%d\n*****\n",sum);
		}
return 0;
	}
