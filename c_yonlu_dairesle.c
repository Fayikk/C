#include <stdio.h>
//Çift yönlü doğrusal bağlı listelerde son düğümün next'i ilk düğümü,ilk düğümün previous'u last düğümü gösterecektir.
struct node{
    int data;
    struct node * next;
    struct node * prev;

};
struct node * start=NULL;
struct node * prev=NULL;
struct node * temp=NULL;
struct node * temp2=NULL;


void basa_ekle(int number){
    struct node * eleman;
    eleman=(struct node *)malloc(sizeof(struct node));
    eleman->data=number;
    if (start==NULL)
    {
        start=eleman;
        start->next=start;
        start->prev=start;
    }
    else
    {
        if(start->next==NULL){
            start->next=eleman;
            start->prev=eleman;
            eleman->next=start;
            eleman->prev=start;
        }
        else
        {
            
            temp2=start;
            while (temp2->next!=start)
            {
                temp2=temp2->next;

            }
            temp2->next=eleman;
            eleman->prev=temp2;
            eleman->next=start;
            start->prev=eleman;
            start=eleman;

            
        }
        
    }
    
    
}
void sona_ekle(int number){
    struct node * eleman;
    eleman=(struct node *)malloc(sizeof(struct node));
    eleman->data=number;
    eleman->next=start;

    if (start==NULL)
    {
        start=eleman;
        start->next=start;
        start->prev=start;
    }
    else{
        if (start->next==start)
        {
            start->next=eleman;
            start->prev=eleman;
            eleman->next=start;
            eleman->prev=start;
        }
        
        else
    {
        temp=start;
        while (temp art)
        {
            temp->next=start;

        }
        temp->next=eleman;
        eleman->prev=temp;
        eleman->next=start;
        start->prev=eleman;
        
        
    }


    }
    
    
    
}
void listele(){
    if (start==NULL)
    {
        printf("Gosterilecek eleman bulunamamaktadır");
    }
    else
    {
        temp=start;
        while (temp->next!=start)
        {                   
            printf("%d",temp->data);
            temp=temp->next;

        }
            printf("%d",temp->data);
        
    }
    

}

int main(){


basa_ekle(1);
basa_ekle(1);
basa_ekle(1);
basa_ekle(1);
// sona_ekle(2);
// sona_ekle(3);
sona_ekle(4);
listele();


    return 0;
}