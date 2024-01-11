/*
1. Write a recursive function to calculate sum of first N natural numbers
2. Write a recursive function to calculate sum of first N odd natural numbers
3. Write a recursive function to calculate sum of first N even natural numbers
4. Write a recursive function to calculate sum of squares of first n natural numbers
5. Write a recursive function to calculate sum of digits of a given number
*/
#include<stdio.h>
//question 1
/*
int sumofnatural(int);
int main()
{
    int n,sum;
    printf("enter the value of n =");
    scanf("%d",&n);
  sum = sumofnatural(n);
  printf("%d",sum);
  return 0;
}
int sumofnatural(int x)
{
    int sum;
    if(x==1)
    return 1;
   return x + sumofnatural(x-1);
}
*/

//question 2
/*
int sumofodd(int);
int main()
{
    int n,sum;
    printf("enter the value of n =");
    scanf("%d",&n);
  sum = sumofodd(n);
  printf("%d",sum);
  return 0;
}
int sumofodd(int x)
{
    int sum;
    if(x==1)
    return 1;
   return (2*x-1) + sumofodd(x-1);
}
*/
//question 3
/*
int sumofeven(int);
int main()
{
    int n,sum;
    printf("enter the value of n =");
    scanf("%d",&n);
  sum = sumofeven(n);
  printf("%d",sum);
  return 0;
}
int sumofeven(int x)
{
    int sum;
    if(x==0)
    return 0;
   return 2*x + sumofeven(x-1);
}
*/
//question 4
/*
int sumofsq(int);
int main()
{
    int n,sum;
    printf("enter the value of n =");
    scanf("%d",&n);
  sum = sumofsq(n);
  printf("%d",sum);
  return 0;
}
int sumofsq(int x)
{
    int sum;
    if(x==0)
    return 0;
   return x*x + sumofsq(x-1);
}
*/
//question 5
/*
int reverse(int);
int main()
{
 int n,sum;
 printf("enter the value of n = ");
 scanf("%d",&n);
 sum=reverse(n);
 printf("%d",sum);
 return 0;
}
int reverse(int a)
{
  if(a==0)
  return 0;
  return a%10+reverse(a/10);
  }
  */
