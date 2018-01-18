#include<stdio.h>
int main()
{
int n,n1,rev=0,rem;
printf("Enter a number");
scanf("%d",&n);
n1=n;
while(n1!=0)
{
rem=n1%10;
rev=rev*10+rem;
n1=n1/10;
}
if(n==rev)
printf("yes");
else
printf("no");
return 0;
}
