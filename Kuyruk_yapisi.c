//Kuyurk yapısında eleman ekleme ve çıkarma işlemlerini yapalım.
//Eğer kuyrukta bir eleman varsa,front ve rear o elemanı gösterecektir.
//First in first out kuralına göre işlem yapılmalıdır.
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node * front=NULL;
struct node * rear=NULL;
struct node * temp=NULL;

int Eleman_Ekle(int value){
        struct node * eleman;
        eleman=(struct node *)malloc(sizeof(struct node));
        eleman->data=value;
        eleman->next=NULL;
    
    //Tek elemanlı ise uygulaması bu şekilde yapılmalıdır.
    if (front==NULL)
    {
       
        front=rear=eleman;        
    }
    //Birden fazla elemana sahip ise aşağıdaki şekildeki gibi gösterilir.
    //Kuyruk yapısında elemanlar başa eklenecektir.
    else
    {
        
        rear->next=eleman;
        rear=eleman;

        //Eleman ekleme işleminide bu şekilde gerçekleştirmiş oluyoruz.
    }
}
void Eleman_Cikar(){
    //Eleman sondan çıkarılır.
    if (front==NULL)
    {
        printf("Kuyruk yapısında çıkartılacak eleman bulunmamaktadır");
    }
    else
    {
        temp=front->next;
        free(front);
        front=temp;

    }
    //Eleman çıkarma işlemini'de burada gerçekleştirmiş oluyoruz.
}

//Şimdi ise kuyruk yapısı için ekleme işlemimizi gerçekleştirelim.
void Yazdir(){
//Kuyruğun boş olup,olmama kontolünü sağlayalım.
    if (front==NULL)
    {
        printf("Kuyrukta yazdırılacak eleman yoktur");
    }
    else
    {
        temp=front;
        printf("Kuyruktaki elemanlar: ");
         while (temp->next!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data); 
    }
}
int main(){

//Şimdi switch-case ile işleyebilir bir projeye dönüştürelim.
//Sonsuz bir döngü ile işlemleri,kullanıcın istediği takdirde tekrarlamasını sağlayalım.
int secim,deger;
char character;

while (1)
{
    printf("*******Queue******\n");
printf("1)Eleman ekleme\n");
printf("2)Eleman çıkarma\n");
printf("3)Listele\n");
printf("4)Çıkıs\n");


printf("Seçiminizi yapınız: ");
scanf("%d",&secim);
    switch (secim)
    {
    case 1:
        printf("Ekleme işlemini sectiniz\n");
        printf("Eklemek istediğinizdeğeri giriniz::\n");
        scanf("%d",&deger);
        Eleman_Ekle(deger);
        printf("calisti");
        break;
    case 2:    
        Eleman_Cikar();
        break;
    case 3:
        printf("Kuyuruk yapısı listeleniyor.");
        Yazdir();
        break;
    case 4:
            return 0;

    default:
        break;
    }
    
}


    return 0;
}