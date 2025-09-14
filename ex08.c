#include<unistd.h>
int ft_nbr()
{
    char digits;
    digits = '0';
    int i =0;
    while(digits <= '9')
    {
        write(1,&digits,1);
        digits++;
        i++;
    }
}
int main()
{
    ft_nbr();
    return 0;
}