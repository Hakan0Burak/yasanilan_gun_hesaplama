#include <stdio.h>

int a_yil(int yil)
{
    if ((yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0)) 
        return 1;
    return 0;
}

int aylar(int gun,int ay, int yil, int syil)
{ 
    int aylar[12];
    int sayac = 0;

    aylar[0] = 0;
    aylar[1] = 31;
    aylar[3] = 31;
    aylar[4] = 30;
    aylar[5] = 31;
    aylar[6] = 30;
    aylar[7] = 31;
    aylar[8] = 31;
    aylar[9] = 30;
    aylar[10] = 31;
    aylar[11] = 30;
    aylar[12] = 31;
    sayac += (aylar[ay] - gun);
    ay++;
    while(yil != syil);
    {
    aylar[2] = 28;
    if(a_yil(yil))
        aylar[2] = 29;
    }
    while(ay <= 12)
    {
        sayac += aylar[ay];
        ay++; 
    }
    return sayac;
}

int main ()
{
    printf("%d", aylar(14,6,2006,2024));
}