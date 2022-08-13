#include <stdio.h>
#include <stdlib.h>
#define boy 10



struct node{
    int indis;
    int dizi[boy];
};
struct node y1;
//Stack yapısına eleman ekleyeylim.
void push(int veri){
    if (y1.indis==boy-1)
    {
        printf("Stackte yer bulunmadığından,eklenecek elemana yer bulunamamaktadır");
    }
    else
    {
        y1.indis++;
        y1.dizi[y1.indis]=veri;
    }
    //Eleman ekleme işlemi tamamlandı.
}
void pop(){
    //Eleman silme işlemi için yeniden bir kontrol sağlayalım.
    if (y1.indis==-1)
    {
        printf("Stack'te silinecek eleman bulunamamaktadır");
    }
    else
    {
        //stackte first in last out veya last in first out kuralı geçerlilik göstermektedir.
        int Cikarilan_Eleman=y1.dizi[y1.indis];
        y1.indis--;
        printf("Yığından çıkarılan sayı, %d",Cikarilan_Eleman);
    } 
}

void yazdir(){
    //Yazdırma işlemi için 
    //İndisten faydalalanacaz yada kendi atamasını yaptığımız bir integer değişkenden faydalanalım.
    int i;
    for ( i = 0; i <= boy-1; i++)
    {
        printf("%d",y1.dizi[i]);
    }
        printf("%d",y1.dizi[i]);
        
    

}


int main(){
int indis=-1;

push(1);
push(2);
push(3);
push(4);
push(5);
push(6);

pop();
pop();
pop();

yazdir();


    return 0;
}