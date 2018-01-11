#include<stdio.h>
int main()
{
int base,exp,res=1;
printf("Enter base number");
scanf("%d",&base);
printf("Enter exp number");
scanf("%d",&exp);
while(exp!=0)
{
res=res*base;
--exp;
}
printf("result is %d",res);
return 0;
}
