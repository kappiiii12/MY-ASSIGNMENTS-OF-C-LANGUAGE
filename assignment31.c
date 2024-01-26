/*
1. Write a function to find the greatest number from the given array of any size.(TSRS)
2. Write a function to find the smallest number from the given array of any size.(TSRS)
3. Write a function to sort an array of any size. (TSRN)
4. Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29])
5. Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
*/
// question 1
/*
#include<stdio.h>
int max(int);
int main()
{
    int n,m;
  printf("enter the size of array = ");
  scanf("%d",&n);
  m=max(n);
  printf("maximum=%d",m);
  return 0;
}
int max(int m)
{
  int a[m],maximum=0,i;
  printf("enter the value of array of size %d = ",m);
  for(i=0;i<=m-1;i++)
  {
  scanf("%d",&a[i]);
  if(maximum<a[i])
  maximum=a[i];
  }
  return maximum;
}
*/
//question 2
/*
#include<stdio.h>
int min(int);
int main()
{
    int n,m;
  printf("enter the size of array = ");
  scanf("%d",&n);
  m=min(n);
  printf("minimum=%d",m);
  return 0;
}
int min(int m)
{
  int a[m],minimum=0,i;
  printf("enter the value of array of size %d = ",m);
  for(i=0;i<=m-1;i++)
  {
  scanf("%d",&a[i]);
  if(minimum<a[i])
  minimum=a[i];
  }
  return minimum;
}
*/
//question 3
/*
#include<stdio.h>
void sort(int m)
{ 
   int i,r,a[m];
  for(i=0;i<=m-1;i++)
  {
    printf("enter the a[%d] value =",i);
    scanf("%d",&a[i]);
  }
  for(r=1;r<=m-1;r++)
     {
      for(i=0;i<=m-1-r;i++)
      {
        if(a[i]<a[i+1])
        {
          a[i]=a[i]+a[i+1];
          a[i+1]=a[i]-a[i+1];
          a[i]=a[i]-a[i+1];
        }
      }
      printf("%d",a[i]);
     }
}
int main()
{
  int n;
  printf("enter the size of array = ");
  scanf("%d",&n);
  sort(n);
  return 0;
}
*/
//question 4
#include<stdio.h>
int rotate( int x,int m,int f)
{
  int a[x],i;
   for(i=0;i<=x-1;i++)
  {
    printf("enter the a[%d] value =",i);
    scanf("%d",&a[i]);
  }
  if(f==0)
  {
    for(i=0;i<=x-1;i++)
  {
    if(i<m-1)
    a[i]=a[i+x-m+1];
    else
    a[i]=a[i-m];
  }}

}
int main()
{
  int size,n,d;
  printf("enter the size of  array = ");
  scanf("%d",&size);
   printf("enter the positon = ");
  scanf("%d",&n);
   printf("enter 0 for left or 1 for right = ");
  scanf("%d",&d);
  rotate(size,n,d);
  return 0;

}
