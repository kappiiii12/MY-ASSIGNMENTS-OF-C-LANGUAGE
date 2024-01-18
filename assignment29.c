/*
1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
3. Write a program to calculate the sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user.
4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
5. Write a program to find the smallest number stored in an array of size 10. Take array values from the user.
*/
#include<stdio.h>
int main()
// question 1
/*
{
    int a[10],i,sum=0;
    for(i=0;i<=9;i++)
    {
        printf("enter the %dth value = ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
  printf("sum =%d",sum);
  return 0;
}
*/
//question 2
/*
{
    int a[10],i,sum=0,avg;
    for(i=0;i<=9;i++)
    {
        printf("enter the %dth value = ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/10;
  printf("avg =%d",avg);
  return 0;
}
*/
// question 3
/*
{
    int a[10],i,c=0,b=0;
    for(i=0;i<=9;i++)
    {
        printf("enter the %dth value = ",i);
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        c=c+a[i];
        else
        b=b+a[i];
    }
    printf("sum of evens =%d\nsum of odds =%d",c,b);
    return 0;
    }
    */
   //question 4 and 5
   
   {
    int a[10],i,max,min;
    for(i=0;i<=9;i++)
    {
        printf("enter the %dth value = ",i);
        scanf("%d",&a[i]);
      }
     for(i=0;i<=9;i++)
     {
     if(max<a[i])
     max=a[i];
     if(min>a[i])
     min=a[i];
     }
     printf("max = %d\nmin = %d",max,min);
     return 0;
    }
    
    
