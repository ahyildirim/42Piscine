void ft_swap(int *a, int *b)
{
    *a = *a + *b; //*a = 5 + 0 = 5 --> *a = 5
    *b = *a - *b; //*b = *a - 0 = 5 - 0 = 5 --> *b = 5
    *a = *a - *b; //*a = *a - *b = 5 - 5 = 0 --> *a = 0
}

#include <stdio.h>
int main()
{
    int a = 5;
    int b = 0;

    ft_swap(&a, &b); //Pointer olduğu için a ve b nin adresini fonksiyona gönderiyoruz.
    printf("%d, %d", a, b); //yeni a ve b değerlerini yazdırıyoruz
}