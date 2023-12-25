#include<stdio.h>
int main()
//1. Write a program to calculate size of a character constant.
/*
{
    printf("size = %lu",sizeof('a'));
    return 0;

}
*/
//2. Write a program to calculate size of a real constant.
/*
{
    
    printf("size = %lu",sizeof(6.98));
    return 0;


}
*/
//3. Write a program with one char type variable. Assign 'A' in the variable. Now change the value of variable from 'A' to 'B' using increment operator.
/*
{
    char a;
    a='A';
    a=++a;
    printf("%c",a);
    return 0;
}
*/

//4. Write a program to swap values of two int variables
/*
{
    int a=1,b=2,c;
    c=a;
    a=b;
    b=c;
    printf("a=%d,b=%d",a,b);
    return 0;    
}
*/
//5. Write a program to swap values of two int variables without using a third variable.
/*
{
    int a=1,b=2;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d,b=%d",a,b);
    return 0;

}
*/
//6. Write a program to swap values of two int variables without using third variable and without using +,- operators.
/*
{
    int a=1,b=2;
    a=a*b;
    b=a/b;
    a=a/b;
    printf("a=%d,b=%d",a,b);
    return 0;
}
*/
//7. Write a program to swap values of two int variables without using third variable and arithmetic operators.
/*
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);
    printf("\n");
    return 0;
}
*/

//8. Write a program to swap values of two int variables in single line arithmetic expression.
/*
{
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    b=a+b-(a=b);
    printf("%d %d",a,b);
    printf("\n");
    return 0;
}
*/