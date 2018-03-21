#include <stdio.h>
int main(void) 
{
int l,temp,sum=0,rem=0;
scanf("%d",&l);
temp=l;
while(l!=0)
{
rem=l%10;
sum=sum+rem*rem*rem;
l=l/10;
}
if(sum==temp)
printf("yes");
else
printf("no");
}	
