// star pattern problems
#include<stdio.h>
int main()
/*
*
**
***
****
*****
*/
/*
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
    *
   **
  ***
 ****
*****
*/
/*
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=5-i)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
*****
****
***
**
*
*/
/*
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=5-i)
            printf("*");
            
            
        }
        printf("\n");
    }
    return 0;
}
*/
/*
*****
 ****
  ***
   **
    *
*/
/*
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf(" ");
            else
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
1
12
123
1234
12345
*/
/*
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
1
21
321
4321
54321
*/
/*
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf("%d",i-j+1);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
ABCDE
 BCDE
  CDE
   DE
    E
*/
/*
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=65;j<=69;j++)
        {
            if(j<=64+i)
            printf(" ");
            else
            printf("%C",j);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
*****
*   *
*   *
*   *
*****
*/
/*
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1|i==5|j==1|j==5)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
ABCDE
 ABCD
  ABC
   AB
    A
*/
/*
{
    int i,j,K;
    for(i=0;i<=5;i++)
    {
        K='A';
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf(" ");
            else
            printf("%c",K++);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
1
23
456
78910
1112131415
*/
/*
{
    int i,j,k=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf("%d",k++);
        }
        printf("\n");
    }
    return 0;
}
*/
