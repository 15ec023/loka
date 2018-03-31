#include<stdio.h>
int main()
{
    int n,k,arr[10],count=0;
    scanf("%d\n%d",&n,&k);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(k==arr[i])
        count+=1;
    }
    printf("%d",count);
    return 0;
}
