#include<stdio.h>
#include<math.h>
void main()
{
 int n;
 char a[10],b[10];
 scanf("%c",&n);
 n=strlen(a);
 for(int i=n;i>=0;i--)
 {
 static x;
 b[x]=a[i];
 printf("%c",b);
 }
 
