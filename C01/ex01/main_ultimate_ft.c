void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

#include <stdio.h>

int main()
{
    int *********a; // 9 adet pointer istendiği için ve biz 9 pointer'a direkt tek bir adres tutturamayacağımız için 9 dan azalarak pointer integer belirliyoruz.
    int ********b;
    int *******c;
    int ******d;
    int *****e;
    int ****f;
    int ***g;
    int **h;
    int *i;
    int j = 23; // Rastgele belirlenen bir integer değeri

    a = &b; // Düzgün bir sırada her pointera diğer pointerın adresini tutturuyoruz. Böylece en sondaki pointer j'nin adresini tuttuğu için dolaylı yoldan a da j'nin adresini tutuyor.
    b = &c;
    c = &d;
    d = &e;
    e = &f;
    f = &g;
    g = &h;
    h = &i;
    i = &j;

    ft_ultimate_ft(a); //9 Pointerlı bir fonksiyona 9 pointerdan daha az pointerlı bir şey gönderemeyeceğimiz için a yı gönderiyoruz.
    printf("%d", j); //j'nin yeni değerini yazdırmak istediğimiz için j yi yazdırıyoruz.
}