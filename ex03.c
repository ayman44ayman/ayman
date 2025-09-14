#include<unistd.h>
int ft_strlen(char *str)
{
    int i =0;
    while(str[i] != '\0')
    {
        i++;
    }
    return(i);
}
char *ft_rev_print(char *str)
{
    int i;
    i = ft_strlen(str);
    while(i>=0)
    {
        write(1,&str[i],1);
        i--;
    }
}
int main()
{
    char str[]= "aymanayman";
    ft_rev_print(str);
}
