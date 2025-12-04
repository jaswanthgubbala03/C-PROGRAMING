#include<stdio.h>
int main()
{
	int radius;
	float a,ac;
	printf("enter the value of radius;");
	scanf("%d",&radius);
	a=2*3.1415*radius*radius;
	ac=2*3.1415*radius;
	printf("%f\n",a);
	printf("%f",ac);
}
