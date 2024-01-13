/*
1. Write a recursive function to calculate factorial of a given number
2. Write a recursive function to calculate HCF of two numbers
3. Write a recursive function to print first N terms of Fibonacci series
4. Write a program in C to count the digits of a given number using recursion.
5. Write a program in C to calculate the power of any number using recursion.
*/
#include<stdio.h>
//question 1
/*
 int factorial(int);
int main()
{
    int n,fact;
    printf("n = ");
    scanf("%d",&n);
    fact = factorial(n);
    printf("factorial =%d",fact);
    return 0;
}
int factorial(int a)
{
    if(a==1)
    return 1;
    return a*factorial(a-1);
}
*/
//question 2
/*
 int hcf(int,int);
int main()
{
    int a,b,HCF;
    printf("value of a,b = ");
    scanf("%d%d",&a,&b);
    HCF = hcf(a,b);
    printf("HCF =%d",HCF);
    return 0;
}
int hcf(int x,int y)
{
  if(x>y)
  {
    if(x%y==0)
    return y;
    hcf(x,x%y);
  }
  else
  {
    if(y%x==0)
    return x;
    hcf(y%x,y);
  }
}
*/
//question 3
/*
void febonacci(int);
int fib(int);
int main()
{
    int n,fact;
    printf("n = ");
    scanf("%d",&n);
    febonacci(n);
    return 0;
}
int fib(int n)
{
    if(n==0 || n==1)
        return n;
    return fib(n-1)+fib(n-2);
}
void febonacci(int n)
{
    if(n>=0)
    {
        febonacci(n-1);
        printf(" %d",fib(n));
    }
    
}
*/
//question 4
/*
int count(int);
int main()
{
    int n,k;
    printf("enter any number = ");
    scanf("%d",&n);
    k= count(n);
    printf("%d",k);
    return 0;
}
int count(int a)
{
   if(a/10==0)
   return 1;
   return 1+count(a/10);

}
*/
//question 5
double power(double x, double y)
{
    if(y==0)
        return 1;
    if(y>0)
        return power(x,y-1)*x;
    else
        return power(x,y+1)/x;
}