#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10



int dizi[BOYUT];
int front=-1;
int rear=-1;

void Eleman_Ekle(int veri){
    //Öncelikle bir karar yapısı ile sağlama yapalım.
    if (front==BOYUT-1)
    {
        printf("Kuyrukta eleman eklemek için alan bulunamamaktadır");
    }
    else
    {
        if (front==-1)
        {
            front=0;//front değeri "0" değerinde büyük olamayacaktır.
            rear=rear+1;
            dizi[front]=veri;
        }
        
        
        
    }
    
    
}
void Eleman_Cikar(){
    if (front==-1 || front>rear)
    {
        printf("Kuyrukta çıkartılacak eleman bulunmamaktadır");
        front=-1;
        rear=-1;
    }
    else
    {
        
        front=front+1;

    }
    
    
}
void Yazdir(){
    int i;
    for ( i = front; i <= rear; i++)
    {
        printf("%d",dizi[i]);
    }
        printf("%d",dizi[i]);
    
    
    
}

int main(){

int secim,deger;

while (1)
{
    printf("KUYRUK YAPIMIZA HOŞGELDİNİZ\n");
    printf("1)Listeye eleman eklemek için basın\n");
    printf("2)Listeden eleman çıkarmak için basın\n");
    printf("3)Listedeki elemanları yazdırmak için basın\n");

        printf("Lütfen seciminizi yapınız:\n");
        scanf("%d",&secim);

    switch (secim)
    {
    case 1:
        printf("Eleman ekleme işlemini seçtiniz\n");
        printf("Eklemek istediğiniz elemanı seçiniz: ");
        scanf("%d",&deger);
        Eleman_Ekle(deger);
        break;
    case 2:
        printf("Eleman silme işlemini seçtiniz");
        Eleman_Cikar();
        break;

    case 3:
        printf("Kuyruktaki elemanlar-> ");
        Yazdir();
        break;    
    default:
        break;
    }
}


    return 0;
}