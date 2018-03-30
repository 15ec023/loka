#include<stdio.h>
#include<string.h>
void main()
{   
    int l,sum=0;
    char st[25];
    scanf("%[^\n]s",st);
    l=strlen(st);
    for(int i=0;i<l;i++)
    {
        sum=sum+st[i];
    }
    printf("%d",sum);
}
