#include <stdio.h>

int a_yil(int yil)
{
    if ((yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0)) 
        return 1;
    return 0;
}

int aylar(int gun,int ay, int yil) // 1.bölümün kodu
{ 
    int aylar[12];
    int sayac = 0;

    aylar[0] = 0;
    aylar[1] = 31;
    aylar[2] = 28;
    if(a_yil(yil))
        aylar[2] = 29;
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
    while(ay <= 12)
    {
        sayac += aylar[ay];
        ay++; 
    }
    return sayac;
}

int aylar2(int gun, int ay, int yil) // 3.bölümün kodu
{ 
    int aylar[12];
    int sayac = 0;
    int gun = 1;
    int ay = 1;

    aylar[0] = 0;
    aylar[1] = 31;
    aylar[2] = 28;
    if(a_yil(yil))
        aylar[2] = 29;
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
    sayac += aylar[ay];
    ay++;
    while(ay <= 12)
    {
        sayac += aylar[ay];
        ay++; 
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
    printf("hangi yılda dogdugunuzu giriniz");
    scanf("%d", &y);
    printf("hangi ayda dogdugunuzu giriniz");
    scanf("%d", &a);
    printf("hangi günde dogdugunuzu giriniz");
    scanf("%d", &g);
  
    y++;
    while (y < syil)
    {
        if (a_yil(y))
            ara += 366;
        else
            ara += 365;
        y++;
    }
    int t;
    t = ara + aylar(g,a,y) + aylar2(sgun,say,syil);
    printf("bugüne kadar %d",t);
}