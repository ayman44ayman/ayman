#include<unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putnbr(int x , int y)
{
    ft_putchar(x / 10 + '0');
    ft_putchar(x % 10 + '0');
    ft_putchar(' ');
    ft_putchar(y / 10 + '0');
    ft_putchar(y % 10 + '0');
    if(!(x == 98))
     ft_putchar(',');
     ft_putchar(' ');
}

void ft_print_comb2(void)
{
    int a;
    a = 0;
    int b;
    while(a <= 98)
    {
        b = a + 1;
        while(b <= 99)
        {      
            ft_putnbr(a, b); 
            b++;
        }
        a++;
    }
}
int main()
{
    ft_print_comb2();
    return 0;
}
