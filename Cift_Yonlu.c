#include <stdio.h>
#include <stdlib.h>
//Çift yönlü doğrusal bağlı liste
//İlk düğüm ve son düğüm haricinde her düğümler çif yön gösterecektir.

struct node{
    int data;
    struct node * next;
    struct node * prev;
};

struct node * start=NULL;
struct node * temp=NULL;
struct node * prev=NULL;
struct node * temp2=NULL;

void basaEkle(int sayi){
    struct node * eleman;
    eleman=(struct node *)malloc(sizeof(struct node));
    eleman->prev=NULL;
    eleman->data;
    if (start==NULL)//eğer yapı boş ise gösterim bu şekildedir.
    {
        start=eleman;
        start->next=NULL;
    }
    else
    {
        eleman->next=start;
        start=eleman;
        
    }
    void listele(){
        if (start==NULL)
        {
            printf("Liste boş");
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
    
    
}

int main(){

    while (1)
    {
        int sayi,secim;
        printf("Lütfen bir secim yapiniz\n");
        printf("1)Basa Eleman Ekleme\n");
        printf("deneme\n");
        printf("3)listele\n");

        scanf("%d",secim);
        switch (secim)
        {
        case 1:
        
            printf("Basa eklenecek elemani seciniz");
            scanf("%d",sayi);
            basaEkle(sayi);
            break;
        
        default:
            break;
        }
    }
    


    return 0;
}