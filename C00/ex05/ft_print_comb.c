#include <unistd.h>

void ft_print_comb(void)
{
    int num1;
    int num2;
    int num3;

    num1 = 0;
    while (num1 <= 9)
    {
        num2 = num1 + 1;
        while (num2 <= 9)
        {
            num3 = num2 + 1;
            while(num3 <= 9)
            {
                write (1, &num1, 1);
                write (1, &num2, 1);
                write (1, &num3, 1);
                if (num1 != 7)
                    write (1, ", ", 2);
                num3++;
            }
            num2++;
        }
        num1++;
    }
}