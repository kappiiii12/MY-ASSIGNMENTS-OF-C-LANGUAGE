/*
1. Write a program to print MySirG N times on the screen

2. Write a program to print the first N natural numbers.

3. Write a program to print the first N natural numbers in reverse order

4. Write a program to print the first N odd natural numbers

5. Write a program to print the first N odd natural numbers in reverse order.

6. Write a program to print the first N even natural numbers

7. Write a program to print the first N even natural numbers in reverse order

8. Write a program to print squares of the first N natural numbers

9. Write a program to print cubes of the first N natural numbers

10. Write a program to print a table of N.
*/
#include<stdio.h>
int main()
//question 1
/*
{
   int n,i=1;
   printf("enter the value of n = ");
   scanf("%d",&n);
   while(i<n+1)
   {
      printf("mysirg\n");
      i++;
   }
   return 0;
}
*/
//question 2
/*
{
    int n,i=1;
      printf("enter the value of n = ");
   scanf("%d",&n);
    while(i<=n)
    {
    printf("%d\n",i);
    i++;
    }
    return 0;
}
*/
//question 3
/*
{
    int n,i=1;
    printf("enter the value of n = ");
   scanf("%d",&n);
    while(i<=n)
    {
    printf("%d\n",n+1-i);
    i++;
    }
    return 0;
}
*/
//question 4
/*
{
    int n,i=1;
    printf("enter the value of n = ");
   scanf("%d",&n);
    while(i<=n)
    {
    printf("%d\n",2*i-1);
    i++;
    }
    return 0;
}
*/
//question 4
/*
{
    int n,i=1;
     printf("enter the value of n = ");
   scanf("%d",&n);
    while(i<=n)
    {
    printf("%d\n",2*n-(2*i-1));
    i++;
    }
    return 0;
}
*/
//question 6
/*
{
    int n,i=1;
    printf("enter the value of n = ");
   scanf("%d",&n);
    while(i<=n)
    {
    printf("%d\n",2*i);
    i++;
    }
    return 0;
}
*/
//question 7
/*
{
    int n,i=1;
     printf("enter the value of n = ");
   scanf("%d",&n);
    while(i<=n)
    {
    printf("%d\n",2*n+2-(2*i));
    i++;
    }
    return 0;
}
*/
//question 8
/*
{
    int n,i=1;
    printf("enter the value of n = ");
   scanf("%d",&n);
    while(i<=n)
    {
    printf("%d\n",i*i);
    i++;
    }
    return 0;
}
*/

//question 9
/*
{
    int n,i=1;
     printf("enter the value of n = ");
   scanf("%d",&n);
    while(i<=n)
    {
    printf("%d\n",i*i*i);
    i++;
    }
    return 0;
}
*/
//question 10
/*
{
    int n,i=1;
    printf("enter the value of n = ");
   scanf("%d",&n);
    while(i<=10)
    {
    printf("%d*%d=%d\n",n,i,n*i);
    i++;
    }
    return 0;
}
*/