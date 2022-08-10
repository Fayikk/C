//eleman ekle
//eleman çıkar
//listele
#include <stdio.h>
#define boy 10

struct yigin{

    int dizi[boy];
    int indis;
};
struct yigin y1;

void eleman_ekle(int value){
    if (y1.indis==boy-1)
    {
        printf("Yıgın doludur eklenecek elemana yoktur.\n");
    }
    else
    {
        //indisin değeri arttırılacak ve,eklenen değerin aritmetik bir şekilde dizide yerini alması gerekecktir.
        y1.indis++;
        y1.dizi[y1.indis]=value;//ekleme elemanı gerçekleşmiştir.
    }
}
void eleman_cikar(){
    if (y1.indis==-1)
    {
        printf("Dizide eklenecek elemana yer yoktur\n");
    }
    else
    {
        //indis değerini 1'er azaltmalıyız.
        //dizinin indis değeri düşürlmelidir.
        //silinen elemen son eklenen eleman olmalıdır.
        //çıkarılan elemanın belirtilmesi gerekmektedir.
        
        int cikan_eleman=y1.dizi[y1.indis];
        y1.indis--;
        printf("yıgından %d sayısı çıkarıldı.",cikan_eleman);
    }
}
void listele(){
//listeleme işlemi bağlı listelerde olmadığımzı için döngü çalışılarak 
//dizi içerisi dolaşılabilir.
    int i;
    for ( i = y1.indis; i >-1; i--)
    {
        printf("%d - ",y1.dizi[i]);
    }
}

int main()
{
int indis=-1;
//şimdi bir switch-case işlemi yapalım.



printf("YIGIN YAPISINA HOŞGELDİNİZ\n");
printf("Yapmak istediğiniz işlemi seçiniz\n");
printf("1)Eleman ekle\n");
printf("2)Eleman çıkar\n");
printf("3)Listele\n");
printf("4)Çıkış\n");

while (1)
{
    int secim,eklenen;
    switch (secim)
    {
    case 1:
        printf("Eklemek istediğiniz elemanı seçiniz\n");
        scanf("%d",&eklenen);
        eleman_ekle(eklenen);
        break;
    case 2:
        printf("Çıkarma islemini sectiniz\n");
        eleman_cikar();
        break;
    case 3:
        printf("Yıgındaki elemanları listelemeyi sectiniz\n");
        listele();
        break;

    case 4:
        printf("Programdan çıkılıyor\n");
        return 0;
    default:
        break;
    }

}



    return 0;
}