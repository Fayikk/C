#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node * next;
    struct node * prev;
};
struct node * start=NULL;

struct node * temp=NULL;

struct node * dugumOlustur(int veri){
    struct node * yenidugum;
    yenidugum=(struct node *)malloc(sizeof(struct node));
    yenidugum->data=veri;
    yenidugum->next=NULL;
    yenidugum->prev=NULL;
}

void Sona_Ekle(int veri){
    struct node * eleman=dugumOlustur(veri);//Normal şartlardaeklenen veri için bağımsız bir şekilde bellekte yer açardık.
    //Burada ise daha önce oluşturulan dugum oluştur verisinden yararlanmaktayız.
    if (start==NULL)
    {
        start=eleman;
    }
    else
    {
        //traverse işlemi yapıyoruz
        temp=start;
        
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=eleman;
            eleman->prev=temp;
    }
    
}
void Basa_Ekle(int veri){
    struct node * eleman=dugumOlustur(veri);
        start->prev=eleman;
        eleman->next=start;
        start=eleman;
    
}

void Araya_Ekle(int veri,int n){
    struct node * eleman=dugumOlustur(veri);
    struct node * temp2;
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
        // temp->next=temp2;
        // eleman->prev=temp;
        // eleman->next=temp2;
        // temp->next=eleman;
        // temp2->prev=eleman;
    }
    
    
}
void yazdir(){
    if (start==NULL)
    {
        printf("Listede yazdırılacak elelman yoktur");
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

Sona_Ekle(1);
Sona_Ekle(2);
Sona_Ekle(3);
Sona_Ekle(4);
Sona_Ekle(5);
Basa_Ekle(9);
Araya_Ekle(8,2);
Araya_Ekle(33,8);
yazdir();


    return 0;
}