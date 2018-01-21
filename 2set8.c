#include<stdio.h>
#include<math.h>
int main()
{
int l,h,i,r,res=0,n=0,t1,t2;
printf("enter two intervals");
scanf("%d %d",&l,&h);
printf(" %d %d ",l,h);
for(i=l+1;i<h;++i)
{
t2=i;
t1=i;
while(t1!=0)
{
t1/=10;
++n;
}
while(t2!=0)
{
r=t2%10;
res+=pow(r,n)
t2/=10;
}
if(res==i)
{
printf("%d",i);
}
n=0;
res=0;
}
return 0;
}
