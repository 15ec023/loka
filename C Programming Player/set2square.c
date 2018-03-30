#include<stdio.h>
#include<math.h>
void main()
{
    int a,x,squ=0;
    scanf("%d",&a);
    while(a!=0)
    {
    x = a%10;
    squ = x*x+squ;
    a = a/10;
    }
    printf("%d",squ);
}    
