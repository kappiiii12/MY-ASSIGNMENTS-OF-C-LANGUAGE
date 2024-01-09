/*1. Write a recursive function to print first N natural numbers
2. Write a recursive function to print first N natural numbers in reverse order
3. Write a recursive function to print first N odd natural numbers
4. Write a recursive function to print first N odd natural numbers in reverse order
5. Write a recursive function to print first N even natural numbers
*/
#include<stdio.h>
//question 1
/*
int natural(int);
int main()
{
    int n;
    printf("enter the value of n =");
    scanf("%d",&n);
  natural(n);
  return 0;
}
int natural(int x)
{
    if(x>1)
    natural(x-1);
    printf("%d\n",x);
    return 0;
}
*/
//question 2
/*
int natural(int);
int main()
{
    int n;
    printf("enter the value of n =");
    scanf("%d",&n);
  natural(n);
  return 0;
}
int natural(int x)
{
    if(x==1)
    {
        printf("1");
        return 0;
    }
    printf("%d\n",x);
    natural(x-1);
}
*/
//question 3
/*
int natural(int);
int main()
{
    int n;
    printf("enter the value of n =");
    scanf("%d",&n);
  natural(n);
  return 0;
}
int natural(int x)
{
    if(x>1)
    natural(x-1);
    printf("%d\n",2*x-1);
    return 0;
}
*/
//question 4
/*
int natural(int);
int main()
{
    int n;
    printf("enter the value of n =");
    scanf("%d",&n);
  natural(n);
  return 0;
}
int natural(int x)
{
    if(x==1)
    {
        printf("1");
        return 0;
    }
    printf("%d\n",2*x-1);
    natural(x-1);
}
*/
//question 5
int natural(int);
int main()
{
    int n;
    printf("enter the value of n =");
    scanf("%d",&n);
  natural(n);
  return 0;
}
int natural(int x)
{
    if(x>1)
    natural(x-1);
    printf("%d\n",2*x);
    return 0;
}