/*
1. Write a function to calculate the area of a circle. (TSRS)
2. Write a function to calculate simple interest. (TSRS)
3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
4. Write a function to print first N natural numbers (TSRN)
5. Write a function to print first N odd natural numbers. (TSRN)
*/
#include<stdio.h>
//question 1
float area(float);
float simple_interest(float,int,float);
int evenodd(int);
int sum(int);
int odd(int);
//question 1
/*
int main()
{
  float radius,a;
  printf("enter the radius = ");
  scanf("%f",&a);
  radius=area(a);
  printf("area=%f",radius);
}
*/
//question 2
/*
int main()
{
    float SI,price,rate;
    int time;
    printf("enter price,time,rate");
    scanf("%f%d%f",&price,&time,&rate);
    SI=simple_interest(price,time,rate);
    printf("SI=%f",SI);
}
*/
//question 3
/*
int main()
{
    int a;
    printf("enter any number= ");
    scanf("%d",&a);
    a=evenodd(a);
    if(a==0)
    printf("even");
    else
    printf("odd");
}
*/
//question 4
int main()
{
    
}
float area(float r)
{

   r=3.14*r*r;
   return r; 
}
float simple_interest(float p,int t,float r)
{
    return p*t*r/100;
}
int evenodd(int n)
{
    return n%2;
}
int sum(int n)
{
  n= n*(n+1)/2;
  printf("sum =%d",n);
}
int odd(int n)
{
    int i;
    for(i=1;i<=n;i++)
    printf("%d\n",2*i-1);
}