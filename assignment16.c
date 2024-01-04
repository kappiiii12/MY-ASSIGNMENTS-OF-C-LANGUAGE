/*
1. Write a program to find the Nth term of the Fibonacci series.
2. Write a program to print first N terms of Fibonacci series
3. Write a program to check whether a given number is there in the Fibonacci series or not.
4. Write a program to check whether a given number is an Armstrong number or not
5 . Write a program to print all Armstrong numbers under 1000
*/
#include<stdio.h>

int main()
//question 1
/*
{
    int a,b,c,n;
    printf("enter the value of n = ");
    scanf("%d",&n);
    for(a=-1,b=1;n;n--)
    {
      c=a+b;
      a=b;
      b=c;
    }
    printf("%d\n",c);
    return 0;    
    
}
*/
//question 2
/*
{
    int a,b,c,n;
    printf("enter the value of n = ");
    scanf("%d",&n);
    for(a=-1,b=1;n;n--)
    {
      c=a+b;
      printf("%d\n",c);
      a=b;
      b=c;
    }
    return 0;    
    
}
*/
//question 3
/*
{
    int a,b,c,n,m;
    printf("enter any number = ");
    scanf("%d",&m);
    for(a=-1,b=1;n=m;n--)
    {
      c=a+b;
      a=b;
      b=c;
    }
  if(c==m)
  printf("yes");
  if(c!=m)
  printf("no");
    return 0;    
    
}
*/
//question 4
{
    int p,x,y,n,r,s=0,i;
    printf("Enter a number");
    scanf("%d",&x);
    y=x;
    for(n=0; y ; n++)
    {
        y/=10;
    }

    y=x;
    while(y)
    {
        r=y%10;
        for(p=1,i=1;i<=n;i++)
        {
            p=p*r;
        }
        s=s+p;
        y=y/10;
    }
    if(s==x)
        printf("%d is an Armstrong number",x);
    else
        printf("%d is not an Armstrong number",x);
    printf("\n");
    return 0;
}
//question 5
{
    int p,x,y,n,r,s,i;
    for(x=1;x<100000;x++)
    {
        s=0;
        y=x;
        for(n=0; y ; n++)
        {
            y/=10;
        }

        y=x;
        while(y)
        {
            r=y%10;
            for(p=1,i=1;i<=n;i++)
            {
                p=p*r;
            }
            s=s+p;
            y=y/10;
        }
        if(s==x)
            printf("%d ",x);
        
    }
    printf("\n");
    return 0;
}
