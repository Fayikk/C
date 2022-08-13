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

void Basa_Ekle(int value){
    struct node * eleman;
    eleman=(struct node *)malloc(sizeof(struct node));
    eleman->next=NULL;
    eleman->data=value;
    if (front==NULL)
    {
        front=rear=eleman;
        
    }
    else
    {
        eleman->next=front;
        front=eleman;
    }
    
}

void Sona_Ekle(int value){
    struct node * eleman;
    eleman=(struct node *)malloc(sizeof(struct node));
    eleman->next=NULL;
    eleman->data=value;
    
    if (front==NULL)
    {
        front=rear=eleman;
        
    }
    else{
        temp=front;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=eleman;
        rear=eleman;
        
    }

    
}


void listele(){
    if (front==NULL)
    {
        printf("Listelenecek eleman bulunmamaktadır");
    }
    else
    {

        temp=front;
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
Basa_Ekle(1);
Sona_Ekle(3);
Basa_Ekle(1);
listele();



    return 0;
}