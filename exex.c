#include<stdio.h>
int main()
{
    int i = 2025;
        int age;
    int x;
    int result;
    char s;
    printf("enter your name :");
    scanf("%s",&s);
    printf("entre yout dat densens :");
    result = scanf("%d", &age);
    x = i + age; // addition
    x = i - age; // subtraction
     printf("your age : %d\n", x);
     if(result != 1)     {

         printf("this is the end");
         return 1;
     }
     printf("hi mradwsalixi");
        return 0;
    }       