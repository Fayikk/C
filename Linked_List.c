#include <stdio.h>
//tek yönlü bağlı liste için yapımızı oluşturalım.
//Yapımızı struct ile ifade etmekteyiz.

//TANIMLAMA


struct dugum{
    int veri;//veriler bizim elemanlarımzıdır.
    struct dugum * gosterici;//Burada görülen yeni bir kavramdır.Bu ifaded bir sonraki düğümü göstermeye yaraycaktır.Yani veri girişi ilk defa girildikten sonra bir sonraki veri için gösterici tutucu görevi görecektir.

};



int main(){

//BELLEKTE YER AYIRMA

    struct dugum * bir;//ilk düğümümüz için bir yapı oluşturduk.
    bir =(struct dugum *)malloc(sizeof(struct dugum));//Burada ise standart bir düğüm tanımlaması yaptık,oluşturduk artık bundan sonra işlemlerimizi.Belli kalıplar altında yapmaya devam edebiliriz.Artık bellekte ilk düğüm için kendimizi yer tahsis ettik ve diğerleri için dizilerdeki gibi elemanların ardışık konumlandırılmasına gerek yoktur.
    //Kaç adet eleman eklemesi yapmak istiyorsak burada o kadar adres tutmamız gerekmektedir.Yukaıda biryerde yanlış bir söylemde bulunmuşum.
   
   struct dugum * iki;//ilk düğümümüz için bir yapı oluşturduk.
    iki =(struct dugum *)malloc(sizeof(struct dugum));//Bellekte yer tahsis ettik.

    struct dugum * uc;//ilk düğümümüz için bir yapı oluşturduk.
    uc =(struct dugum *)malloc(sizeof(struct dugum));

    struct dugum * dort;//ilk düğümümüz için bir yapı oluşturduk.
    dort =(struct dugum *)malloc(sizeof(struct dugum));


 //VERİ GİRİŞİ

   
    bir->veri=11;//Burada ise dügüm1'in değerini 11 olarak atamasını yapmaktayız.    
    bir->gosterici=iki;//Burada ise bir'in gösterici düğüm2'yi göstersin dedik.Çinkü diğim 1 ile düğüm2'ye ulaşabilmekteyizdir.

    iki->veri=31;
    iki->gosterici=uc;

    uc->veri=69;
    uc->gosterici=dort;

    dort->veri=12;
    dort->gosterici=NULL;

    printf("%d-%d-%d-%d",bir->veri,iki->veri,uc->veri,dort->veri);


    return 0;
}