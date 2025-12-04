#include<stdio.h>
int main()
{
	int p,t,r,si;
	printf("enter values of p t r:");
	scanf("%d%d%d",&p,&t,&r);
	si=p*t*r/100;
	printf("simple interest is %d",si);
	return 0;
}
