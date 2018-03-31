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
    if(arr[i]%2!=0)
    {
        count+=1;
        if(count==k)
        {
        printf("\n%d",arr[i]);
        }
    }
    }
    return 0;
}
