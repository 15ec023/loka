#include<stdio.h>
void main()
{
    int n,count=1;
    scanf("%d",&n);
    while(n>10)
    {
        n /= 10;
        count +=1;
    }
    printf("%d",count);
}
