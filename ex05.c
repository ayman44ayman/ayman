#include<unistd.h>
void write_ft_number(int a)
{
    if(a>9)
        write_ft_number(a /10);
        write(1,&"0123456789"[a % 10],1);
}
int main()
{
    int i;
    i =1;
    while(i<=100)
    {
        if(i % 3 == 0 && i % 5 ==0)
            write(1,"fizzbuzz",8);
        else if(i % 3 == 0)
            write(1,"fizz",4);
        else if( i % 5 == 0)
            write(1,"buzz",4);
        else
        write_ft_number(i);

            write(1, "\n", 1);
            i++;
    }
}