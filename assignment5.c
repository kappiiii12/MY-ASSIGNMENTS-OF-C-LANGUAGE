/*1. Write a program to input a three digit number and display the sum of the digits.

2. Write a program to find ASCII code of the character '+'.

3. Write a program to print size of an int, a float, a char and a double type variable

4. Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make itx = 2340 )

5. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit-9 then the resulting number is 2349)*/
#include<stdio.h>
int main()
// auestion 1
/*
{
    int a,i=1,sum=0;
    printf("enter a three digit number = ");
    scanf("%d",&a);
    while(i<=3)
    {
           sum=sum+a%10;
           a=a/10;
           i++;
    }
    
    printf("sum of digits of given number = %d",sum);
    return 0;

}
*/
//question 2
/*
{
    char a='+';
    printf("%d",a);
    return 0;
}
*/
//question 3
/*
{
    int a;
    char b;
    float c;
    double d;
    printf("size of int variable =%d\nsize of char varible =%d\nsize of float variable = %d\nsize of double variable = %d",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
    return 0;
}
*/
//question 4
/*
{
    int a;
    printf("enter any number = ");
    scanf("%d",&a);
    a=(a/10)*10;
    printf("required answer = %d",a);
    return 0;

}
*/
//question 5
/*
{
    int a,b;
    printf("enter any nymber = ");
    scanf("%d",&a);
     printf("enter any digit = ");
    scanf("%d",&b);
    a=a*10+b;
    printf("required answer = %d",a);
    return 0;
}
*/