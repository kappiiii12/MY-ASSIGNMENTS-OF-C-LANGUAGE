#include<stdio.h>
int main()
/*
   *
  ***
 *****
*******
*/
/*
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>4-i && j<4+i)
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
*******
**   **
*     *
*/
/*
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>4-i && j<4+i)
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
*******
 *****
  ***
   *
*/
/*
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
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
   *
  * *
 * * *
* * * *   
*/
/*
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<=9;j++)
        {
            if(j>4-i && j<4+i && (i+j)%2==1)
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
   1
  121
 12321
1234321
*/
/*
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>4-i && j<4+i)
            {
            printf("%d",k);
            j<4?k++:k--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/

/*
ABCDEFFG
 ABCDE
  ABC
   A
*/
/*
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            printf("%c",k++);
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
ABCDCBA
 ABCBA
  ABA
   A
*/
/*
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
            printf("%c",k);
            j<4?k++:k--;
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
ABCDCBA
ABC CBA
AB   BA
A     A
*/
/*
{
    int i,j,k;
    for(i=0;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j>4-i && j<4+i)
            {
            printf(" ");
            if(j==4)
            k--;
            }
            else
            {
            printf("%c",k);
            j<4?k++:k--;
            }
        }
        printf("\n");
    }
    return 0;
}
*/
/*
1234321
123 321
12   21
1     1
*/
/*
{
    int i,j,k;
    for(i=0;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>4-i && j<4+i)
            {
            printf(" ");
            if(j==4)
            k--;
            }
            else
            {
            printf("%d",k);
            j<4?k++:k--;
            }
        }
        printf("\n");
    }
    return 0;
}
*/
/*
    1
   1 1
  1 2 1
 1 2 2 1
1 2 3 2 1
*/
/*
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=0;j<=9;j++)
        {
            if(j>4-i && j<4+i && (i+j)%2==1)
            {
            printf("%d",k);
            j<=4?k++:k--;
            }
            else
            printf(" ");
            if(j==4)
            k--;
        }
        printf("\n");
    }
    return 0;
}
*/
