/*
1. Write a program to convert a given string into lowercase
2. Write a program to reverse a string.
3. Write a program in C to count the total number of alphabets, digits and special characters in a string.
4. Write a program in C to copy one string to another char array.
5. Write a program to find first occurrence of a given character in a given string.*/
//solution 1
/*
#include<stdio.h>
#include<string.h>
int main(){
    char s[20];
    int i;
    printf("Enter any string = ");
    fgets(s,20,stdin);
     for(i=0;i<strlen(s);i++){
        if(s[i]<96)
        s[i]+=32;
     }
     printf("%s",s);
     return 0;
     }*/


// solution 2
/*
#include<stdio.h>
#include<string.h>
int main(){
    char s[20];
    int i,m;
    printf("Enter any string = ");
    fgets(s,20,stdin);
    m=strlen(s);
    char k[m];
     for(i=0;i<=m;i++){
        k[i]=s[m-i-1];
     }
     printf("%s",k);
     return 0;
}*/
// solution 4
/*
#include<stdio.h>
#include<string.h>
int main(){
    char s[20],a[20];
    int i;
    printf("Enter any string = ");
    fgets(s,20,stdin);
    for(i=0;i<=strlen(s);i++)
    a[i]=s[i];
     printf("%s",a);
     return 0;
     }
     */

// solution 5
/*
#include <stdio.h>
#include <string.h>
int main(){
    char str[20],a;
    int count=0,i;
    printf("ENTER ANY STRING and character = ");
    fgets(str,20,stdin);
    scanf("%c",&a);
    for(i=0;i<=strlen(str);i++){
        if(str[i]==a)
        count+=1;
    }
   printf("%d",count);
    return 0;
}*/