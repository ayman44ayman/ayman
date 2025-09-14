#include<unistd.h>
#include<stdio.h>
char    *ft_strcpy(char *s1, char *s2)
{
   int i =0;
    while(s2[i] !='\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}
int main()
{
    char a1[20] = "ayman";
    char a2[] = "el mahdali";
    printf("%s",ft_strcpy(a1,a2));
}