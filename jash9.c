#include<stdio.h>
int main()
{
	int p,t,r;
	float si,ci;
	printf("enter values of p t r:");
	scanf("%d%d%d",&p,&t,&r);
	si=(p*t*r)/100.0;
	ci=p*(1+r/100^t)-p;
	printf("simple interest is %f\n",si);
	printf("compound interest is %f\n",ci);
	return 0;
}
