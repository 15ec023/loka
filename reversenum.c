#include<stdio.h>
#include<math.h>
void main()
{
 int n,rem,rev;
 scanf("%d",&n);
 while(n!=0)
 {
  rem=n%10;
  rev=rev*10+rem;
  n=n/10;
 }
printf("%d",rev);
}
 
