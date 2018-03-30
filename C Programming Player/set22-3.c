#include<stdio.h>
#include<math.h>
void main()
{
  int x,y,arr[10][10],i,j,p=1,p1=1;
  scanf("%d",&x);//no of rows and columns
  for(i=0;i<x;i++)
  {
      for(j=0;j<x;j++)
      {
          scanf("%d",&arr[i][j]);
          
      }
  }
  for(i=0;i<x;i++)
  {
      for(j=0;j<x;j++)
      {
          if(i==j)
           p=p*arr[i][j];
          else
           p1=p1*arr[i][j];
          
      }
  }
  int sum=p+p1;
  printf("\n%d",sum);
}
