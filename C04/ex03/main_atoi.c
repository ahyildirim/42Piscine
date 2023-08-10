int ft_atoi(char *str)
{
    int a;
    int sign;
    int result;
    
    a = 0;
    sign = 1;
    while((str[a] >= 9 && str[a] <= 13) || str[a] == 32)
        a++;
    while(str[a] == '-' || str[a] == '+')
    {
        if(str[a] == '-')
            sign *= -1;
        a++;
    }
    while (str[a] >= '0' && str[a] <= '9')
     {
        result = result * 10 + str[a] - 48;
        a++;
    }
    return (result * sign);
}

#include <stdio.h>
int main()
{
    printf("%d", ft_atoi("  ---+--+1234ab567"));
}