#include<stdio.h>
void main()
{
    int n,arr[50],i,average,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum += arr[i];
    }
    average = sum/n;
    printf("%d",average);
}
    
