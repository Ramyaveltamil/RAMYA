#include<stdio.h>
int main()
{
int i, min,max;
printf("enter the starting and ending number");
scanf("%d %d",&min,&max);
for(i=min+1;i<=max;i++)
{
if(i%2!=0)
{
printf("%d",&i);
}
}
return 0;
}
