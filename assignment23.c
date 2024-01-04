/*
1. Write a function to calculate LCM of two numbers. (TSRS)
2. Write a function to calculate HCF of two numbers. (TSRS)
3. Write a function to check whether a given number is Prime or not. (TSRS)
4. Write a function to find the next prime number of a given number. (TSRS)
5. Write a function to print first N prime numbers (TSRN)
*/
#include<stdio.h>
// question 1
/*
int lcm(int,int);
int main()
{
    int a,b,L;
    printf("enter any number = ");
    scanf("%d%d",&a,&b);
    L = lcm(a,b);
    printf("%d",L);
    return 0;
}
int lcm(int x,int y)
{
 int lcm,i;
 if(x>y)
 {
  for(i=2;i<=y-1;i++)
   {
     if(x%i==0 && y%i==0)
       break;
   }
   if(i==y)
   return 1;
   else 
   return i;
 }
 else
 {
  for(i=2;i<=x-1;i++)
   {
     if(x%i==0 && y%i==0)
       break;
   }
   if(i==x)
   return 1;
   else 
   return i;
}
}
//question 2
/*
int hcf(int,int);
int main()
{
    int a,b,h;
    printf("enter any number = ");
    scanf("%d%d",&a,&b);
    h = hcf(a,b);
    printf("%d",h);
    return 0;
}
int hcf(int x,int y)
{
    int i;
    for(i=1;i;i++)
    {
        if(x*i%y==0)
        break;
    }
    return x*i;
}
*/
//question 3
int checkprime(int a)
{
    {
    int i=2;
    while(i<=a-1)
    {
        if(a%i==0)
        break;
        i++;
    }
     if(i==a)
     return 0;
     else
     return 1;
}
}
//question 4
int nextprimenumber(int a,int b)
{
 
  int i;
     for(b=a;b>=a;b++)
 {
   for(i=2;i<=b-1;i++)
       {
          if(b%i==0)
           break;
       }  
    if(i==b)
    break;
 }
 return b; 
}
//question 5
 void firstNprimenumbers(int b)
{
  int a,i;
     for(a=1;a<=b;a++)
 {
   for(i=2;i<=a-1;i++)
       {
          if(a%i==0)
           break;
       }  
    if(i==a)
    printf("%d\n",a);
 }-