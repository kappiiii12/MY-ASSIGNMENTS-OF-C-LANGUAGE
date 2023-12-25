/*
1. Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.

2. Write a program to take a three digit number from the user and rotate its digits by

one position towards the right. 

3. What will be the value stored in the variable x after executing following statement:
 x = 10>8>4

4. What will be the value stored in the variable x after executing following statement: 
x=!2>-2;

5. What will be the value stored in the variable x after executing following statement:

x = 3<0&&5>0
*/
#include<stdio.h>
int main()
//question 1
/*
{
    float a;
    printf("enter amount in INR = ");
    scanf("%f",&a);
    printf("your amount in USD = %f",a/84.23);
    return 0;
}
*/
//question 2
/*
{
    int a;
    printf("enter a three digit number = ");
    scanf("%d",&a);
    a=(a/10)+(a%10)*100;
    printf("required answer = %d",a);
    return 0;
}
*/
//question 3
/*
{
    int x;
    x=10>8>4;
    printf("%d",x);
    return 0;
}
*/
//question 4
/*
{
    int x;
    x=!2>-2;
    printf("%d",x);
    return 0;
}
*/
//question 5
/*
{
    int x;
    x=3<0&&5>0
    printf("%d",x);
    return 0;
}
*/