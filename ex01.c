#include<unistd.h>
#include<stdio.h>
int ft_atoi(const char *str)
{
    int i;
    int sing;
    int result;
    i = 0;
    sing =1;
    result=0;
    while(str[i]==32 || str[i]>=9 && str[i]<=13)
    {
        i++;
    }
    if(str[i]=='-')
    {
        sing = -1;
        i++;
    }
    else if(str[i] == '+')
    {
        i++;
    }
    while(str[i] != '\0' && str[i]>='0' && str[i]<= '9')
    {
        result *= 10;
        result += str[i]-'0';
        i++;
    }
    return (sing * result);
}
int	main(void)
{
	char str[] = "   -+--e34abc56";
    printf("%d",ft_atoi(str));
}