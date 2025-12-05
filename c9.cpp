#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a+b;
    a=b-a;
    b=b-a;
    b=b-a;
    printf("%d
",a);
    printf("%d",b);
}
