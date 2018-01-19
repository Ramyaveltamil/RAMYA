#include<stdio.h>
int main()
{
int n,m,r,res=0;
printf("enter a number");
scanf("%d",&n);
m=n;
while(m!=0)
{
r=m%10;
res=r*r*r;
m=m/10;
}
if(res==n)
printf("yes");
else
printf("no");
return 0;
}
