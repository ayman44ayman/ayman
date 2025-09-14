#include<unistd.h>
#include<stdio.h>
int  count_alen(char *str)
{
    int i;
    i =0;
    int b = 0;
    int count = 0;
    while(str[i] != '\0')
    {
        if(b)
        {
        count++;
        }
        else if(str[i]=='a' && !b)
        {
            b=1;
        }
        i++;
    }
    return count;
}
int main()
{
    char str[]="el mhdli ayman";
   int result = count_alen(str);
    printf("%d",result);
}