#include<stdio.h>
int main()
{
	int sum=0;
	int i=1,n;
	printf("enter n value:");
	scanf("%d",n);
	while(n%2==0)
	{
		sum=sum+i;
		i++;
	}
	printf("sum of %d n.n:%d",n,sum);
}
