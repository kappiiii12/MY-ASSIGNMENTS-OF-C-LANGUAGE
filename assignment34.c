/*
1. Write a program to calculate the length of the string. (without using builtin method)

2. Write a program to count the occurrence of a given character in a given string.

3. Write a program to count vowels in a given string

4. Write a program to count spaces in a given string.

5. Write a program to convert a given string into uppercase
*/
//solution 1
/*
#include <stdio.h>
int main(){
    char str[20];
    printf("ENTER ANY STRING");
    fgets(str,20,stdin);
    int i;
    for(i=0;str[i];i++);
    printf("Lenght = %d",i-1);
    return 0;
}
*/
//solution 2
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
}
*/
//solution 3
/*
#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    int count=0,i;
    printf("ENTER ANY STRING = ");
    fgets(str,20,stdin);
    for(i=0;i<=strlen(str);i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        count+=1;
    }
   printf("%d",count);
    return 0;
}
*/
//SOLUTION 4
/*
#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    int count=0,i;
    printf("ENTER ANY STRING  = ");
    fgets(str,20,stdin);
    for(i=0;i<=strlen(str);i++){
        if(str[i]==' ')
        count+=1;
    }
   printf("%d",count);
    return 0;
}
*/
//solution 5
#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    int i;
    printf("ENTER ANY STRING = ");
    fgets(str,20,stdin);
    for(i=0;i<=strlen(str);i++){
        if(str[i]>96)
         str[i]-=32;
    }
   printf("%s",str);
    return 0;
    }