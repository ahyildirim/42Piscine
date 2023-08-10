void ft_ft(int *nbr)
{
    *nbr = 42;
}

#include <stdio.h>

int main()
{
    int a; //Rastgele bir integer değişkeni belirliyoruz.

    a = 23; //42'ye değiştiğini belli etmek için değer atıyoruz.
    ft_ft(&a); //Yukarıda fonksiyonun içi pointer olarak belirlendiği için fonksiyona a integerinin "adresini" '&' işareti ile pointera atıyoruz.
    printf("%d", a); //Yukarıda a işleme girdikten sonra 42 olarak değiştiği için direkt a'yı yazdırıyoruz.
}