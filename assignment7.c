/*
1. Write a program to check whether a given number is positive or non positive.

2. Write a program to check whether a given number is divisible by 5 or not

3. Write a program to check whether a given number is an even number or an odd number.

4. Write a program to check whether a given number is an even number or an odd number without using % operator.

5. Write a program to check whether the given number is even or odd using a bitwise operator.
*/
#include<stdio.h>
int main()
{
    int x;
    printf("enter an intezer = ");
    scanf("%d",&x);
    //question 1
    //x>0?printf("positive number"):(x<0?printf("negative number"):printf("zero"));
   // question 2
   //x%5==0?printf("given intezer is divisible by 5"):printf("given number is not divisible by 5");
   //question 3
   //x%2==0?printf("even"):printf("odd");
   // question 4
   //x/2*2==x?printf("even"):printf("odd");
   //question 5
   //x&1==0?printf("even"):printf("odd");
   return 0;
}


