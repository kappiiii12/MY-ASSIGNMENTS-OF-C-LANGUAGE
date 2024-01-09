/*
1. Write a function to print all Prime numbers between two given numbers. (TSRN)
2. Write a function to print first N terms of Fibonacci series (TSRN)
3. Write a function to print PASCAL Triangle. (TSRN)
4. Write a function to print all Armstrong numbers between two given numbers.(TSRN)
5. Write a function to find the sum of first N terms of the series 1!/1+2!/2+3!/3+4!/4+5!/5... n!/n (TSRS)
*/
#include<stdio.h>
//question 1
void primebtwtwo(int a,int b)
{
  int i;
     for(a=a;a<=b;a++)
 {
   for(i=2;i<=a-1;i++)
       {
          if(a%i==0)
           break;
       }  
    if(i==a)
    printf("%d\n",a);
 }
}
//question 2
void Nfebonacci(int n)
{
    int a,b,c;
    for(a=-1,b=1;n;n--)
    {
      c=a+b;
      printf("%d\n",c);
      a=b;
      b=c;
    }
    return 0;    
    
}
//question 3

//question 5
/*
#include <stdio.h>
int sum(int);
int factorial(int);
int main()
{
   int n,s;
   printf("enter the value of n = ");
   scanf("%d",&n);
   s= sum(n);
   printf("s=%d",s);
   return 0;
}
int sum(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    s=s+factorial(i)/i;
    return s;
    
}
int factorial(int n)
 {
     int i,a=1;
     for(i=1;i<=n;i++)
     a=a*i;
     return a;
 }
*/