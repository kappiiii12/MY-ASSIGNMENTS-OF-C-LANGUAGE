/*
1. Write a program to check whether a given number is a three digit number or not.

2. Write a program to print greater between two numbers. Print one number if both are the same.

3. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

4. Write a program to check whether a given year is a leap year or not.

5. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
*/
#include<stdio.h>
int main()
//question 1
/*
{
    int x;
    printf("enter any number = ");
    scanf("%d",&x);
    x/10==0?printf("not a three digit number"):(x/100==0?printf("not a three digit number"):(x/1000==0?printf("this is a three digit number"):printf("not a three digit number")));

    return 0;
}
*/
//question 2
/*
{
    int a,b;
    printf("enter two numbers = ");
    scanf("%d%d",&a,&b);
    a>=b?printf("greater number is %d",a):printf("greater number is %d",b);
    return 0;
}
*/
//question 3
/*
{
    int a,b,c;
    printf("enter cofficient of x^2 = ");
    scanf("%d",&a);
    printf("enter cofficient of x = ");
    scanf("%d",&b);
    printf("enter the constant term = ");
    scanf("%d",&c);
    if(b*b-4*a*c==0)
    printf("real and equal");
    else if(b*b-4*a*c>0)
    printf("real and distinct");
    else
    printf("imaginary roots");
    return 0;


}
*/
//question 4
/*
{
    int x;
    printf("enter the year = ");
    scanf("%d",&x);
    x%100==0?printf("not a leap year"):(x%4==0?printf("leap year"):printf("not a leap year"));
    return 0;
}
*/
//question 5
/*
{
    int a,b,c;
    printf("enter the first number");
    scanf("%d",&a);
     printf("enter the second number");
    scanf("%d",&b);
     printf("enter the third number");
    scanf("%d",&c);
    a>b?(a>c?printf("%d is greatest",a):printf("%d is greatest",c)):(b>c?printf("%d is grestest",b):printf("%d is greatest",c));
    return 0;
}
*/