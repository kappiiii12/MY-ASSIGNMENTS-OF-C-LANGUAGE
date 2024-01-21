/*
1. Write a program to sort elements of an array of size 10. Take array values from the user.
2. Write a program to find second largest in an array. Take array values from the user.
3. Write a program to find the second smallest number in an array. Take array values from the user.
4. Write a program to sort an array of 10 elements in descending order.
5. Write a program in C to copy the elements of one array into another array. Take array values from the user. 
*/
#include<stdio.h>
//question 1
/*
int main()
{
    int a[10],i,r,t;
    printf("enter the values of array = ");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
        {
              if(a[i]>a[i+1])
          {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
          }
        }
    }
    for(i=0;i<=9;i++)
    printf("%d ",a[i]);
    return 0;
}
*/
//question 2
/*
int main()
{
    int a[10],i,r,t;
    printf("enter the values of array = ");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
        {
              if(a[i]>a[i+1])
          {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
          }
        }
    }
    printf("%d ",a[8]);
    return 0;
}
*/
// question 3
/*
int main()
{
    int a[10],i,r,t;
    printf("enter the values of array = ");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
        {
              if(a[i]>a[i+1])
          {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
          }
        }
    }
    printf("%d ",a[1]);
    return 0;
}
*/
//question 4
/*
int main()
{
    int a[10],i,r,t;
    printf("enter the values of array = ");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(r=1;r<=9;r++)
    {
        for(i=0;i<=9-r;i++)
        {
              if(a[i]<a[i+1])
          {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
          }
        }
    }
    for(i=0;i<=9;i++)
    printf("%d ",a[i]);
    return 0;
}
*/
//question 5
int main()
{
    int a[10],i,b[10];
    printf("enter the values of array = ");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
        for(i=0;i<=9;i++)
        {
            b[i]=a[i];
            printf("%d ",b[i]);
        }
    return 0;
}


