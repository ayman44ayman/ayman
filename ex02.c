#include<unistd.h>
void ft_print_number(void)
{
    char c;
    c='0';
    while(c>='0' && c<='9')
    {
        write(1,&c,1);
        c++;
    }
}
int main() 
{
    ft_print_number();
    return 0;
}