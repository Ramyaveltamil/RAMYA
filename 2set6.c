#include<stdio.h>
int main()
{
int low,high,i,j,prime;
printf("enter the intervals");
scanf("%d %d",&low,&high);
for(i=low+1;i<high;i++)
{
prime=1;
for(j=2;j=i/2;j++)
if(i%j==0)
{
prime=0;
break;
}
if(prime)
printf("\t%d",i);
return 0;
}
}
