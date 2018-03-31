#include<stdio.h>
void main()
{
    int n1,n2;
    char a1[50],a2[50];
    scanf("%s %s",&a1,&a2);
    n1=strlen(a1);
    n2=strlen(a2);
    if(n1>n2)
    printf("%s",a1);
    else
    printf("%s",a2);
}
    
