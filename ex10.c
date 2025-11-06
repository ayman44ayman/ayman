#include <unistd.h>
// int main()
// {
//     char a = 'c';
//    () write(1, &a ,1);  
//    write(1, "\n", 1);
// }
// int main()
// {
//     int i = 'z';
//     while(i >= 'a')
//     {
//         write(1, &i ,1);
//         i--;
//     }
//     write(1, "\n", 1);
// }
// int main()
// {
//     int i = '9';
//     while(i >= '0')
//     {
//         write(1, &i ,1);
//         i--;
//     }
//     write(1, "\n", 1);
// }
// ft_is_negative(int n)
// {
//     if(n < 0 )
//     {
//         write(1, "N", 1);
//     }
//     if(n > 0)
//     {
//         write(1, "P", 1);
//     }
// }

// int main()
// {
//     ft_is_negative(42);
// }
// int main()
// {
//     int a =0;
//     int b; 
//     int c;
//     while(a <= 7)
//     {
//         a++;
//         int b = a + 1;
//         while(b <= 8 )
//         {
//             b++;
//         }
//         int c = b + 1;
//         while(c <= 9)
//         {
//             c++;
//         }
//         write(1, &a ,1);
//         write(1, &b ,1);
//         write(1, &c ,1);
//     }
// }
// int main()
// {
//     int  i = 0;
//     char c;
//     while(i <= 7)
//     {
//         c = '0' + i;
//         write(1, &c, 1);
//         i++;

//     }
//     write(1, "\n", 1);
// }
#include <stdio.h>
#include <string.h>
int ft_strlen(char *str )
{
    int i = 0;
    while(str[i] != '\0')
    {
        while(str[i] == 'a')
        {
            return i;
        }
        
        i++;
    }
    return i;
}
int main()
{
    char test[] = "eleddldad";
    printf("%d ""\n",ft_strlen(test));
    return 0;
}
