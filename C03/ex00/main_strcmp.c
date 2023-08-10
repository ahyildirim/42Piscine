int ft_strcmp(char *s1, char *s2)
{
    int a;

    a = 0;
    while(s1[a])
    {
        if(s1[a] == s2[a])
            a++;
        else
            return (s1[a] - s2[a]);
    }
    return (s1[a] - s2[a]);
}

#include <stdio.h>
int main()
{
    char s1[] = "Ahmet";
    char s2[] = "Ahmwt";
    printf("%d", ft_strcmp(s1, s2));
}