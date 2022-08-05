#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};
struct node * start=NULL;
struct node * temp=NULL;
void BasaEkle(int number){
    struct node * eklenen;
    eklenen=(struct node *)malloc(sizeof(struct node));
    if(start==NULL){
        eklenen=start;
    }
    else{
        temp=start;
        while (temp->next!=NULL)
        {
            temp=temp->next;

        }
        temp->next=eklenen;
        
    }
}
void ArayaEkle(int veri,int n){
    struct node * eleman;
    eleman=(struct node * )malloc(sizeof(struct node));
    eleman->data=veri;
    temp=start;
    while (temp->next->data!=n)
    {
        temp=temp->next;

    }
    struct node * temp2;//Oluşturulan 2.gecici deger.
    temp2=(struct node * )malloc(sizeof(struct node));//Bellekte yer tahsisi
    temp2=temp->next;
    temp->next=eleman;
    eleman->next=temp2;
    //Araya eleman eklemede 2 geçici değişkene ihtiyacımız vardırki doğru bir yerleştirme işlemi yapabilelim.

}
void print(){
    temp=start;
    while (temp->next!=NULL)
    {
        temp=temp->next;
        printf("%d",temp->data);
    }
        printf("%d",temp->data);
    



}



int main(){

int adet;
int secim;
int number;
int karakter;
while (adet!=5)
{
    
    printf("1 den 3'e kadar secim yapınız:");
    scanf("%d",secim);
    switch (secim)
    {
    case 1:
        printf("eleman gir::");
        scanf("%d",&number);
        BasaEkle(number);

        break;
    case 2:
        printf("eklenecek eleman giriniz");
        scanf("%d",&number);
        printf("hangi elemandan sonra eklenmesini istersiniz");
        print();
        scanf("%d",&karakter);
        ArayaEkle(number,karakter);
    default:
        break;
    }
}





    return 0;
}
