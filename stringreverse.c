#include<stdio.h>
void main()
{
 int i,n;
 char str[10],rev[10];
 scanf("%c",&str[10]);
 n=strlen(str[10]);
 for(i=n;i>=0;i--)
 {
  static x;
  rev[x]=str[i];
  x++;
  printf("%c",&rev[10]);
  }
  return 0;
  }
  
