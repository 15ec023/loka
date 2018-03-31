#include <stdio.h>
int main()
{
    int count=1,a;
    scanf("%d",&a);
    while(a>10)
    {
        a = a/10;
        count=count+1;
    }
 printf("%d",count);
    return 0;
}
