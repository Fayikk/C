#include <stdio.h>
#include <stdlib.h>
//Çift yönlü bağlı liste

struct node{
    int data;
    struct node * next;
    struct node * prev;
};

struct node * start=NULL;
struct node * temp=NULL;
struct node * temp2=NULL;

struct node * yeni_dugum(int veri){
    struct node * ydugum;
    ydugum=(struct node *)malloc(sizeof(struct node));
    ydugum->next=NULL;
    ydugum->prev=NULL;
    ydugum->data=veri;

}

//Cift yonlu dugumun basına eleman ekleyelim.
void Basa_Ekle(int veri){
    struct node * eleman=yeni_dugum(veri);
    if (start==NULL)
    {
        start=eleman;
        start->next=NULL;
    }
    else
    {
        start->prev=eleman;
        eleman->next=start;
    }    
}

void Sona_Ekle(int veri){
    struct node * eleman=yeni_dugum(veri);
    if (start==NULL)
    {
        start=eleman;
        start->prev=NULL;
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
        eleman->next=NULL;   
    }
    

}

void Araya_Ekle(int veri,int n){//n verilen değerden önce ekleme yapılacaktır.
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

void Yazdir(){
    if (start==NULL)
    {
        printf("Listelenecek eleman yoktur");
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


Basa_Ekle(1);
Basa_Ekle(2);
Basa_Ekle(3);
Basa_Ekle(4);
Sona_Ekle(8);
Yazdir();


    return 0;
}