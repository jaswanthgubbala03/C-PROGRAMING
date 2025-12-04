#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter values of a and b::");
	scanf("%d%d",&a,&b);
	c=a&b;
	printf("Bitwise AND:%d\n",c);
	c=a/b;
	printf("Bitwsie OR:%d\n",c);
	c=a^b;
	printf("Bitwise EX-OR:%d\n",c);
	c=a<<b;
	printf("Bitwise left shift:%d\n",c);
	c=a>>b;
	printf("Bitwise right shift:%d\n",c);
	return 0;
}
