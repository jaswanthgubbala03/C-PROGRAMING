 #include<stdio.h>
int main()
{
	int a[10],n,i,pos,nv;
	printf("enter n value\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter index place\n");
	scanf("%d",&pos);
	printf("enter new value\n");
	scanf("%d",&nv);
	a[pos]=nv;
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}

