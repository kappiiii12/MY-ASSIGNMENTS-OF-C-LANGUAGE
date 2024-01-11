/*
1. Write a recursive function to print first N even natural numbers in reverse order
2. Write a recursive function to print squares of first N natural numbers
3. Write a recursive function to print binary of a given decimal number
4. Write a recursive function to print octal of a given decimal number
5. Write a recursive function to print reverse of a given number
*/

#include<stdio.h>
/*
//question 1
void even(int);
int main()
{
 int n;
 printf("enter the value of n = ");
 scanf("%d",&n);
 even(n);
 return 0;
}
void even(int a)
{
    printf("%d\n",a);
    if(a>1)
    even(a-1);
}
*/
//question 2
/*
void square(int);
int main()
{
 int n;
 printf("enter the value of n = ");
 scanf("%d",&n);
 square(n);
 return 0;
}
void square(int a)
{
    printf("%d\n",a*a);
    if(a>1)
    square(a-1);
}
*/
//question 3
/*
void decimal(int);
int main()
{
 int n;
 printf("enter the value of n = ");
 scanf("%d",&n);
 decimal(n);
 return 0;
}
void decimal(int x)
{
    if(x>0)
    decimal(x/2);
    printf("%d",x%2);
}
*/
//question 4
/*
void octal(int);
int main()
{
 int n;
 printf("enter the value of n = ");
 scanf("%d",&n);
 octal(n);
 return 0;
}
void octal(int x)
{
    if(x>0)
    octal(x/8);
    printf("%d",x%8);
}
*/
//question 5
void reverse(int);
int main()
{
 int n;
 printf("enter the value of n = ");
 scanf("%d",&n);
 reverse(n);
 return 0;
}
void reverse(int a)
{
    if(a>0)
    printf("%d",a%10);
    reverse(a/10);
    
}

