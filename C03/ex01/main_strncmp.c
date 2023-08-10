int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int a;

    a = 0;
    while(s1[a] && (s1[a] == s2[a]) && n--)
        a++;
    if(n == 0)
        return (0);
    else
        return (s1[a] - s2[a]);
}

#include <stdio.h>
int main()
{
    char s1[] = "Ahmet";
    char s2[] = "Ahwet";
    printf("%d", ft_strncmp(s1, s2, 3));
}