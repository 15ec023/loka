#include<stdio.h>
int main()
{
    int n,k,arr[10],flag=0;
    scanf("%d\n%d",&n,&k);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(k==arr[i])
        flag=1;
    }
    if(flag==1)
    printf("yes");
    else
    printf("no");
    return 0;
}
