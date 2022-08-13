#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
    struct node * prev;
};
struct node * temp=NULL;
struct node * temp2=NULL;
struct node * start=NULL;
struct node * temp3=NULL;

struct node * yeni_dugum(int veri){
    struct node * dugum;
    dugum=(struct node *)malloc(sizeof(struct node));
    dugum->next=NULL;
    dugum->prev=NULL;
    dugum->data=veri;
}

void basa_eleman_ekle(int veri){
    struct node * eleman=yeni_dugum(veri);
    if (start==NULL)
    {
        start=eleman;
    }
    else
    {
        eleman->next=start;
        eleman->prev=NULL;
        start=eleman;

    }    
}

void sona_eleman_ekle(int veri){
    struct node * eleman=yeni_dugum(veri);
    if (start==NULL)
    {
        start=eleman;

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
        
    }
    
    
}
void Araya_Yazdir(int veri,int n){
    struct node * eleman=yeni_dugum(veri);
    if (start==NULL)
    {
        start=eleman;
    }
    else
    {
        temp=start;
        while (temp->next->data!=n)
        {
            temp=temp->next;
        }
        temp2=temp->next;
        temp->next=eleman;
        eleman->next=temp2;
        eleman->prev=temp;
        
    }
}
void Bastan_Sil(){
    if (start==NULL)
    {
        printf("Silinecek eleman bulunamamaktadır");
    }
    else
    {
        start->next=temp2;
        free(temp);
        start=temp2;
    }
    
    
}

void Sondan_Sil(){
    if (start==NULL)
    {
        printf("Listede silinecek eleman bulunamadı");
    }
    else
    {
        temp=start;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->prev=temp2;
        free(temp);
        temp2->next=NULL;
    }    
}

void Aradan_Sil(int n){
    if (start==NULL)
    {
        printf("Listede silinecek eleman bulunamadı");
    }
    else
    {
        temp=start;
        while (temp->next->data!=n)
        {
            temp=temp->next;
        }
        temp2=temp->prev;
        temp3=temp->next;
        free(temp);
        temp3->prev=temp2;
        temp2->next=temp3;
        
        
        
    }
    
}

void Yazdir(){
    if (start==NULL)
    {
        printf("Gösterilecek eleman yoktur");
    }
    else
    {
        temp=start;
        while (temp->next!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
        
    }
    
    
}


int main(){

basa_eleman_ekle(1);
basa_eleman_ekle(2);
basa_eleman_ekle(3);
basa_eleman_ekle(4);
basa_eleman_ekle(5);

sona_eleman_ekle(6);
sona_eleman_ekle(7);
sona_eleman_ekle(8);
sona_eleman_ekle(9);
sona_eleman_ekle(1);
Araya_Yazdir(6,3);

Bastan_Sil();
// Sondan_Sil();
Aradan_Sil(7);
Yazdir();
    return 0;
}