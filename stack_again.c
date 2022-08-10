#include <stdio.h>
#define boy 10



struct yigin
{
    //değişkenlerimizi oluşturalım.
    int dizi[boy];
    int indis;  //top->indiste tutulan değerler
};

struct yigin y1;
//eleman ekleme işlemi aslında nedir.Push işlemidir.
void elemanEkle(int sayi){
        if (y1.indis==boy-1)
        {
            printf("Yigin doludur.Overflow");
        }
        else
        {
            //stack boş ise ekleme işlemini geçekleştirelim.
            y1.indis++;
            y1.dizi[y1.indis]=sayi;
        }
        
        
}   
//Şimdi birde pop fonksiyonunu gerçekleştirelim.
void elemanCikar(){
    if (y1.indis==-1)
    {
        printf("stack'te çıkarılacak eleman yoktur");
    }
    else
    {
        int cikan_sayi=y1.dizi[y1.indis];
        y1.indis--;        
        printf("yıgından %d sayisi cikarildi",cikan_sayi);
    }
    
    
}

void yazdir(){
    if (y1.indis==-1)
    {
        printf("Yıgından yazdırılacak eleman yoktur\n");
    }
    else
    {
        int i;
        for (i = y1.indis; i >-1 ; i--)
        {
            printf("%d",y1.dizi[i]);
        }
        
    }
    
    
}


int main()
{
    //indis değerini tanımlayalım
    y1.indis=-1; //indisi -1 olarak tanımlamamdaki anlam yığının boş olduğu anlamına gelecektir.
    int secim,sayi;
    
    
    printf("YIGIN\n");
    printf("1----->eleman ekle(push) \n");
    printf("2----->eleman çıkar(pop) \n");
    printf("3----->yazdir(display) \n");
    printf("4----->Çıkış (exit) \n");
    printf("1----->seçiminizi yapınız \n");

    scanf("%d",&secim);
    switch (secim)
    {
    case 1:
        printf("eklenecek eleman");
        scanf("%d",&sayi);
        elemanEkle(sayi);
        break;
    // case2:
    case 3 :
        yazdir();
        break;
    default:
        break;
    }
    
    
    return 0;
}