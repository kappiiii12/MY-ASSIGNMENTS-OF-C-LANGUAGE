/*
1. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

2. Write a program to take marks of 5 subjects from the user. Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

3. Write a program to check whether a given alphabet is in uppercase or lowercase.

4. Write a program to check whether a given number is divisible by 3 and divisible by 2.

5. Write a program to check whether a given number is divisible by 7 or divisible by 3.
*/
#include<stdio.h>
int main()
//question 1
/*
{
    float a,b;
    printf("enter selling price = ");
    scanf("%f",&a);
    printf("enter cost price = ");
    scanf("%f",&b);
    a<b?printf("loss=%f%%",((b-a)/b)*100):printf("profit=%f%%",((a-b)/b)*100);
    return 0;
}
*/
//question 2
/*
{
    float a,b,c,d,e;
    printf("enter the marks in hindi = ");
    scanf("%f",&a);
    printf("enter the marks in english = ");
    scanf("%f",&b);
    printf("enter the marks in maths = ");
    scanf("%f",&c);
    printf("enter the marks in science =");
    scanf("%f",&d);
    printf("enter the marks in social science = ");
    scanf("%f",&e);
    a>33?(b>33?(c>33?(d>33?(e>33?printf("congrats!!you are pass"):printf("sorry! you are fail")):printf("sorry! you are fail")):printf("sorry! you are fail")):printf("sorry! you are fail")):printf("sorry! you are fail");
    return 0;
}
*/
//question 3
/*
{
    char a;
    printf("enter an alphabet = ");
    scanf("%c",&a);
    if(a>='a' && a<='z')
    printf("lowercase");
    if(a>='A' && a<='Z')
    printf("UPPERCASE");
    return 0;
}
*/
//question 4
/*
{
    int a;
    printf(" enter any number = ");
    scanf("%d",&a);
    a%6==0?printf("number is divisible by 2 and 3"):printf("number is not divisible by 2 and 3");
    return 0;
}
*/
//question 5
/*
{
    int a;
     printf(" enter any number = ");
    scanf("%d",&a);
    a%7==0|a%3==0?printf("number is divisible by 7 or 3"):printf("number is not divisible by 7 or 3");
    return 0;

}
*/