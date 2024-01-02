/*
1. Write a program which takes the month number as an input and display number of days in that month.
2. Write a menu driven program with the following options:
  1. Addition
  2. Subtraction
  3. Multiplication
  4. Division 
  5. Exit
3. Write a program which takes the day number of a week and displays a unique greeting message for the day.
4. Write a menu driven program with the following options:
  1. Check whether a given set of three numbers are lengths of an isosceles triangle or not
  2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not 
  3. Check whether a given set of three numbers are equilateral triangle or not
  4. Exit


*/
#include<stdio.h>
#include<stdlib.h>
int main()
//question 1
/*
{
    int x;
    printf("enter the month number = ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("31 days in this month");
        break;
        case 2:
        printf("28/29 days in this month");
        break;
         case 3:
        printf("31 days in this month");
        break;
         case 4:
        printf("30 days in this month");
        break;
         case 5:
        printf("31 days in this month");
        break;
         case 6:
        printf("30 days in this month");
        break;
         case 7:
        printf("31 days in this month");
        break;
         case 8:
        printf("31 days in this month");
        break;
         case 9:
        printf("30 days in this month");
        break;
         case 10:
        printf("31 days in this month");
        break;
         case 11:
        printf("30 days in this month");
        break;
         case 12:
        printf("31 days in this month");
        break;
        
    }
    return 0;
}
*/
//question 2
/*
{
    int a,b,x;
    printf("enter any two numbers = ");
    scanf("%d%d",&a,&b);
    printf(" enter \n1 for Addition\n2 for Subtractio\n3 for Multiplication \n4 for Division\n5 for  Exit");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("a+b=%d",a+b);
        break;
        case 2:
        printf("a-b=%d",a-b);
        break;
        case 3:
        printf("a*b=%d",a*b);
        break;
        case 4:
        printf("a/b=%d",a/b);
        break;
        case 5:
        exit(0);
        
    

    }
}  
*/  
// question 3
/*
{
    int x;
    printf("enter the day number of week = ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("happy monday");
        break;
        case 2:
        printf("happy tuesday");
        break;
         case 3:
        printf("happy wednesday");
        break;
         case 4:
        printf("happy thu.");
        break;
         case 5:
        printf("happy fri.");
        break;
         case 6:
        printf("happy sat.");
        break;
         case 7:
        printf("happy sun.");
        break;
    }
    return 0;
}
*/
// question 4
/*
{
    int a,b,c,x;
    printf("enter the sides of the triangle = ");
    scanf("%d%d%d",&a,&b,&c);
    printf("enter\n1 for Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
    printf("2 for Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
    printf("3 for Check whether a given set of three numbers are equilateral triangle or not\n");
    printf("4 for Exit\n");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        {
            if(a==b|b==c|c==a)
            printf("it is a isosceles triangle ");
            else
            printf("it is not a isosceles triangle ");
        }
        break;
        case 2:
        {
           if(a>b&&a>c) 
             {
                if(a*a==b*b+c*c)
                printf("it is a right angled triangle ");
            else
            printf("it is not a right angled triangle ");
             }
             else if(b>a&&b>c) 
             {
                if(b*b==a*a+c*c)
                printf("it is a right angled triangle ");
            else
            printf("it is not a right angled triangle ");
             }
            else  
             {
                if(c*c==b*b+a*a)
                printf("it is a right angled triangle ");
            else
            printf("it is not a right angled triangle ");
             }
        }
        break;
        case 3:
        {
        if(a==b && a==c)
            printf("it is an equilateral triangle ");
            else
            printf("it is not an equilateral triangle ");
        }
        break;
        case 4:
        exit(0);
    }
}
*/