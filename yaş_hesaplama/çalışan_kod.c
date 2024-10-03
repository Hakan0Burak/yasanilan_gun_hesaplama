#include <stdio.h>
#include <time.h>

int artik_yil_hesaplama(int yil)
{
    if ((yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0)) 
        return 1;
    return 0;
}

int dogum_yili_aylari_hesaplama(int gun,int ay, int yil) // 1.bölümün kodu
{ 
    int aylar[12];
    int sayac = 0;

    aylar[0] = 31;
    aylar[1] = 28;
    if(artik_yil_hesaplama(yil))
        aylar[1] = 29;
    aylar[2] = 31;
    aylar[3] = 30;
    aylar[4] = 31;
    aylar[5] = 30;
    aylar[6] = 31;
    aylar[7] = 31;
    aylar[8] = 30;
    aylar[9] = 31;
    aylar[10] = 30;
    aylar[11] = 31;
    sayac += (aylar[ay-1] - gun);
    ay++;
    while(ay <= 12)
    {
        sayac += aylar[ay - 1];
        ay++; 
    }
    return sayac;
}

int hedef_yili_aylari_hesaplama(int gun, int ay, int yil) // 3.bölümün kodu
{ 
    int aylar[12];
    int sayac = 0;

    aylar[0] = 31;
    aylar[1] = 28;
    if(artik_yil_hesaplama(yil))
        aylar[1] = 29;
    aylar[2] = 31;
    aylar[3] = 30;
    aylar[4] = 31;
    aylar[5] = 30;
    aylar[6] = 31;
    aylar[7] = 31;
    aylar[8] = 30;
    aylar[9] = 31;
    aylar[10] = 30;
    aylar[11] = 31;
    sayac += gun;
    ay--;
    while(ay > 0)
    {
        sayac += aylar[ay - 1];
        ay--; 
    }
    return sayac;

}

int main () // 2.bölüm ve main kodu
{
    int syil = 2024;
    int say = 10;
    int sgun = 2;
    int ara = 0;
    int y;
    int a;
    int g;
    printf("hangi yilda dogdugunuzu giriniz: ");
    scanf("%d", &y);
    printf("hangi ayda dogdugunuzu giriniz: ");
    scanf("%d", &a);
    printf("hangi gunde dogdugunuzu giriniz: ");
    scanf("%d", &g);
  
    y++;
    while (y < syil)
    {
        if (artik_yil_hesaplama(y))
            ara += 366;
        else
            ara += 365;
        y++;
    }
    int t;
    t = ara + dogum_yili_aylari_hesaplama(g,a,y) + hedef_yili_aylari_hesaplama(sgun,say,syil);
    printf("bugune kadar %d gun yasadiniz\n",t - 1);
}