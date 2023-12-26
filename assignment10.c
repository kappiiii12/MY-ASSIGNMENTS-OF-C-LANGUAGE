/*
1. Write a program to check whether a given number is positive, negative or zero.
2. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character. 
3.Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
4. Write a program which takes the month number as an input and display number of days in that month.
*/
#include<stdio.h>
int main()
//question 1
/*
{
   int a;
   printf("enter any number = ");
   scanf("%d",&a);
   a>0?printf("positive number"):(a<0?printf("negative number"):printf("zero"));
   return 0;
}
*/
// question 2
/*
{
    char a;
    printf("enter something = ");
    scanf("%c",&a);
    if(a>='a' && a<='z')
    printf("lowercase");
    else if(a>='A' && a<='Z')
    printf("UPPERCASE");
    else if(a>='0' && a<='9')
    printf("a digit");
    else
    printf("a special character");
    return 0;
}
*/
//question 3
/*
{
    int a,b,c;
    printf("enter the lenght of sides of trialgle = ");
    scanf("%d%d%d",&a,&b,&c);
    a+b>c && a-b<c?printf("valid triangle"):printf("invalid triangle");
    return 0;
}
*/
//QUESTION 4
/*
{
 int x;
 printf("enter month number = ");
 scanf("%d",&x);
 if(x==1|x==3|x==5|x==7|x==8|x==10|x==12)
 printf("31 days in this month");
 else if(x==2)
 printf("this month contains 28/29 months");
 else
 printf("this month contains 30 days");
 return 0;
}
*/