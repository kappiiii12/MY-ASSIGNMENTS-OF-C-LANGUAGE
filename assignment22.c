
/*
1. Write a function to calculate the factorial of a number. (TSRS)
2. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
3. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS) ▷
4. Write a function to check whether a given number contains a given digit or not. (TSRS)
5. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)
*/
#include<stdio.h>
void primefactors(int);
int main()
{
    int a;
    scanf("%d",&a);
    primefactors(a);
    return 0;
}

/*
int factorial(int k)
{
    int i,a;
   for(i=1,a=1;i<=k;i++)
   {
    a=a*i;
   }
   return a;

}
int combinations(int n,int r)
{
  return factorial(n)/factorial(r)/factorial(n-r);
}
int arrangements(int n,int r);
{
    return factorial(n)/factorial(n-r);
}
int check(int a,int b);
{
  while(a)
  {
       if(a%10==b)
        {
           return 0;
           break;
        }
        a=a/10;
  }
  return 1;

}
*/
void primefactors(int n)
  {
    int i=2;
    while(n>1)
    {
          while(n%2==0)
            {
              printf("%d\n",i);
                n=n/i;
            }
          i++;
    }
  }

