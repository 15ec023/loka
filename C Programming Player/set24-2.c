#include<stdio.h>
#include<math.h>
void main()
{
  int x,y,arr[10][10],i,j,sum=0,sum1=0;
  scanf("%d",&x);//no of rows
  scanf("%d",&y);//no of columns
  for(i=0;i<x;i++)
  {
      for(j=0;j<y;j++)
      {
          scanf("%d",&arr[i][j]);
          
      }
  }
  for(i=0;i<x;i++)
  {
      for(j=0;j<y;j++)
      {
          if(i==j)
           sum=sum+arr[i][j];
          else
           sum1=sum1+arr[i][j];
          
      }
  }
  int p=sum*sum1;
  printf("\n%d",p);
}
