//basa ekle
//sona ekle
//bastan sil
//sondan sil
//eleman adedi
//elemanlar toplami
//listele
#include <stdio.h>

struct node{
    int data;
    struct node* next;
    struct node * prev;
};
struct node * start=NULL;
struct node * temp=NULL;
struct node * temp2=NULL;
struct node * next=NULL;

void basa_ekle(int value){
    struct node * eleman;
    eleman=(struct node *)malloc(sizeof(struct node));
    eleman->data=value;
    if (start==NULL)
    {
        start=eleman;
        start->next=NULL;
    }
    else
    {
        eleman->next=start;
        start=eleman;
    }
}
void sona_ekle(int value){
    struct node * eleman;
    eleman=(struct node *)malloc(sizeof(struct node));
    eleman->data=value;
    if(start==NULL){
        eleman->prev=NULL;
        start=eleman;
    }
    else
    {
        if (start->next==NULL)
        {
            start->next=eleman;
            eleman->prev=start;
        }
        else
        {
            temp=start;
                    while (temp->next!=NULL)
                    {
                        temp=temp->next;
                    }
                        temp->next=eleman;
                        eleman->prev=temp;
                        eleman->next=start;
                        start->prev=eleman;        
        }
    }



}
void bastan_sil(){
    if (start==NULL)
    {
        printf("Listede silinecek eleman bulunmamaktadır.");
    }
    else
    {
        if (start->next==NULL)
        {
            free(start);
            printf("Listedeki tek eleman silindi.Listede başka eleman bulunmamaktadır");

        }
        else
        {
            temp=start->next;
            free(start);
            temp->prev=NULL;
            start=temp;
    }
    
}
}
void sondan_sil(){
    if (start==NULL)
    {
        printf("Listede silinecek eleman bulunamamaktadır");
    }
    else
    {
        temp=start;
        while (temp->next!=start)
        {
            temp=temp->next;
        }
        temp->prev=temp2;
        free(temp);
        temp2->next=start;
        start->prev=temp2;
    }
    




}
void eleman_adedi(){
    int adet;
    if (start==NULL)
    {
        printf("listede eleman bulunmamaktadır");
    }
    else
    {
        if (start->next==NULL)
        {
            printf("listede 1 eleman bulunmamaktadır.");
        }
        else
        {
            temp=start;
            while (temp->next!=start)
            {
                temp=temp->next;
                adet++;

            }
            adet++;
            printf("listedeki eleman adedi: %d ",adet);

        }
        
        
    }
    
    
    
}
void eleman_toplami(){
    int toplam=0;
    
    if (start==NULL)
    {
        printf("listede toplancak eleman yoktur");
    }
    else
    {
        temp=start;
        while (temp->next!=NULL)
        {
            temp=temp->next;
            printf("listedeki elemanlar: \n");
            printf("%d \n",temp->data);
            toplam=toplam+temp->data;
        }
            toplam=toplam+temp->data;
        printf("%d",toplam);
    }
    
    
}
void listele(){
    if(start==NULL){
        printf("Listede gösterilecek eleman yoktur");
    }
    else
    {
        temp=start;
        while (temp->next!=start)
        {
            temp=temp->next;
            printf("%d -",temp->data );
        }
            printf("%d -",temp->data );
        
    }
    
}

void cikis(){

    return 0;
}

int main()
{
    int secim,number;

    while (1)
    {
        printf("Lütfen yapmak istediginiz islemi seciniz\n");
        printf("1)Basa eleman ekleme\n");
        printf("2)Sona eleman ekleme\n");
        printf("3)Bastan eleman silme\n");
        printf("4)Sondan eleman silme\n");
        printf("5)Eleman adedi\n");
        printf("6)Elemanlar toplamı\n");
        printf("7)Listele\n");
        printf("8)Çıkış\n");

        scanf("%d",&secim);
        switch (secim)
        {
        case 1:
            printf("Listeye eleman eklemeyi sectiniz\n");
            printf("Basa eklemek istediğiniz elemanı yazınız::");
            scanf("%d",&number);
            basa_ekle(number);
            break;
        case 2:
            printf("Sona eleman eklemeyi sectiniz\n");
            printf("Sona eklemek istediğiniz elemanı seçiniz\n");
            scanf("%d",&number);
            sona_ekle(number);
            break;

        case 3:
            printf("Bastan eleman silmeyi sectiniz");
            bastan_sil();
            break;
        case 4:
            printf("Sondan eleman silmeyi sectiniz");
            sondan_sil();
            break;
        case 5:
            eleman_adedi();
            break;
        case 6:
            printf("Elemanların toplamını sectiniz");
            eleman_toplami();
            break;
        case 7:
            printf("Elemanlar listeleniyor");
            listele();
            break;
        case 8: 
                cikis();
        default:
            break;
        }
    }
    





    return 0;
}


