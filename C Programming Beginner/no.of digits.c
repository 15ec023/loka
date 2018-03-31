#include <stdio.h>
int main()
{
    int count=0,a;
    scanf("%d",&a);
    while(a!=0)
    {
        a =a/10;
        count=count+1;
    }
 printf("%d",count);
    return 0;
}
