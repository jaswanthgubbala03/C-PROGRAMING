#include<stdio.h>
int main()
{
    int rev=0,rem,n,temp;
    scanf("%d",&n);
     temp=n;
     while(n!=0)
     {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        
     }
     if(rev==temp)
     printf("Palindrome");
     else
     printf("Not Palindrome");
    }

