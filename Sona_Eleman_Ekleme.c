#include <stdio.h>
#include <stdlib.h>

struct dugum{

    int veri;
    struct dugum * gosterici;

};
//Geçici düğüm oluşturalım.

struct dugum * bas=NULL;//Bunu tarama işlemi yapılırken eğer düğüm boş ise eklenen eleman en başa eklenecektir.
struct dugum * gecici=NULL;//Burada ise eğer düğümde eleman varsa elemanı en sona ekleyecek şekilde customize edelim.
//gecici normalden C#'tan bildiğimiz Next() metodu yerine kullanılır.


//Sona eleman ekleme işlemlerimiz için bir metod oluşturalım.
void SonaEkle(int sayi){
    struct dugum * eklenen;//Düğümü oluşturduk
    eklenen=(struct dugum *)malloc(sizeof(struct dugum));//Düğüm için bellkete yer ayırdık.
    eklenen->veri=sayi;//parametre olarak girilecek sayı değerini yeni oluşturulan düğüme atamasını gerçekleştireceğiz.
    eklenen->gosterici=NULL;

    //Uygulama işlemimizi nereye yapacağımzı vs koşul ifadeleri ile kontrol ediyoruz.
    if(bas==NULL){
        //Eger baştaki elemanda boş ise bağlı listemiz boş demektir dolayısı ile eklenen eleman direk olarak bağlı listenin başına yerleştirilecektir.
        bas=eklenen;

    } 
    else
    {
        //Eğer baştaki eleman boş değil ise doluysa ne olacığını buradaki kavramlar ile kontrol ediyoruz.
        
        gecici=bas;
        while (gecici->gosterici!=NULL)
        {
            gecici=gecici->gosterici;
        }
        gecici->gosterici=eklenen;
    }
}
void yazdir(){

    gecici=bas;
    while(gecici->gosterici!=NULL)
    {
        printf("%d",gecici->veri);
        gecici=gecici->gosterici;
    }
    printf("%d",gecici->veri);


}

int main(){

int adet=0;
while (adet!=5)
{
    int sayi;
    printf("bir sayi girin");
    scanf("%d",&sayi);
    SonaEkle(sayi);
    adet++;
}
yazdir();






    return 0;
}