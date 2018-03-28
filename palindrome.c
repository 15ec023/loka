#include<stdio.h>
#include<math.h>
void main()
{
int num,temp,rev,rem;
scanf("%d",&num);
temp=num;
if(num<=1000)
{
while(temp!=0)
{
 rem=num%10;
 rev=rev*10+rem;
 num=num/10;
}
if(num==rev)
printf("Yes");
else
printf("No");
}
}
