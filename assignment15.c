/*
1. Write a program to print all Prime numbers under 100

2. Write a program to print all Prime numbers between two given numbers

3. Write a program to find next Prime number of a given number

4. Write a program to calculate HCF of two numbers

5. Write a program to check whether two given numbers are co-prime numbers or not
*/
#include<stdio.h>
int main()
// question 1
/*
{
  int a,i;
   for(a=2;a<=99;a++)
 {
   for(i=2;i<=a-1;i++)
       {
          if(a%i==0)
           break;
       }  
    if(i==a)
    printf("%d\n",a);
 }
  

 return 0;
}
*/
//question 2
/*
{
  int a,b,i;
  printf("initial value =");
  scanf("%d",&a);
  printf("final value=");
  scanf("%d",&b);
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
  

 return 0;
}
*/
//question 3
/*
{
  int a,b,i;
  printf("enter any number =");
  scanf("%d",&a);
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
 printf("%d\n",b);
 return 0;
}
*/
//question 4
/*
{
  int a,b,i;
  printf("enter two number for HCF = ");
  scanf("%d%d",&a,&b);
  if(a>b)
{
  for(i=2;i<=a;i++)
  {
    if(a%i==0 && b%i==0)
    break;
  }
  if(i>a)
  printf("1");
  else
  printf("%d",i);
}
else
{
 for(i=2;i<=b;i++)
  {
    if(a%i==0 && b%i==0)
    break;
  }
  if(i>b)
  printf("1");
  else
  printf("%d",i); 
}
  return 0;
}
*/
//question 5
/*{
  int a,b,i;
  printf("enter two number  = ");
  scanf("%d%d",&a,&b);
  if(a>b)
{
  for(i=2;i<=a;i++)
  {
    if(a%i==0 && b%i==0)
    break;
  }
  if(i>a)
  printf("co prime");
  else
  printf("not co prime");
}
else
{
 for(i=2;i<=b;i++)
  {
    if(a%i==0 && b%i==0)
    break;
  }
  if(i>b)
  printf("co prime");
  else
  printf("not co prime"); 
}
  return 0;
}
*/