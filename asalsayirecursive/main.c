#include <stdio.h>
#include <stdlib.h>

int asalsayi(int sayi, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (sayi % i == 0)
       {
         return 0;
       }
       else
       {
         return asalsayi(sayi, i - 1);
       }
    }
}

int main()
{
    int sayi, sonuc;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    sonuc = asalsayi(sayi, sayi / 2);
    if (sonuc == 1)
    {
        printf("%d asal sayidir.\n", sayi);
    }
    else
    {
        printf("%d asal sayi degildir.\n", sayi);
    }
    return 0;
}

