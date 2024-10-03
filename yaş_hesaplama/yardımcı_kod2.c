int main()
{
    int yaş ;
    int yil ;
    int ay ;
    int hafta ;
    int gün ;
    int saat ;
    unsigned int dakika ;
    unsigned int saniye ; 
    printf("lütfen yaşinizi giriniz :");
    scanf("%d",&yaş);
    yil = yaş ;
    ay = yil*12;
    hafta = ay*4 ;
    gün = hafta*7;
    saat = gün*24;
    saniye = saat*60;
    printf("%d yil yaşamişsiniz\n",yil);
    printf("%d ay yaşamişsini\n",ay);
    printf("%d hafta yaşamişsiniz\n",hafta);
    printf("%d gün yaşamişsiniz\n",gün);
    printf("%d saat yaşamişsiniz\n",saat);
    printf("%d saniye yaşamişsiniz\n",saniye);
    return 0;
}