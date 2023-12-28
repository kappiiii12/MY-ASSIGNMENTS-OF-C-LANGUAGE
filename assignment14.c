/*
1. Write a program to calculate factorial of a number
2. Write a program to count digits in a given number
3. Write a program to check whether a given number is a Prime number or not
4. Write a program to calculate LCM of two numbers
5. Write a program to reverse a given number
*/
#include<stdio.h>
int main()
//question 1
/*
{
    int a,i=1,f=1;
    printf("enter the value of a = ");
    scanf("%d",&a);
    while(i<=a)
    {
        f=f*i;
        i++;
    }
    printf("factorial of %d is %d ",a,f);
    return 0;
}
*/
//question 2
/*
{
    int a,i=1;
    printf("enter the value of a = ");
    scanf("%d",&a);
    while(i<=a)
    {
        a=a/10;
        if(a==0)
        break;
        i++;
    }
    printf("number of digits = %d",i);
    return 0;
}
*/
//question 3
/*
{
    int a,i=2;
    printf("enter the value of a = ");
    scanf("%d",&a);
    while(i<=a-1)
    {
        if(a%i==0)
        break;
        i++;
    }
     if(i==a)
     printf("number is prime");
     else
     printf("number is not prime ");
         return 0;
}
*/
//question 4
/*
{
    int a,b,i=1,lcm;
    printf(" enter two numbers = ");
    scanf("%d%d",&a,&b);
        while(i<=a)
        {
           lcm=b*i;
            if(lcm%a==0)
            break;
            i++;
        }
    printf("lcm of %d and %d is %d",a,b,lcm);
    return 0;
}
*/
//question 5
/*
{
   int x,y=0;
    printf("Enter a number");
    scanf("%d",&x);
    while(x)
    {
        y=y*10+x%10;
        x/=10;
    }
    printf("Reverse is %d",y);
    printf("\n");
    return 0;  
}
*/
