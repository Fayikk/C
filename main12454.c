#include <stdio.h>
#include <stdlib.h>
//�ift y�nl� do�rusal ba�l� liste
//�lk d���m ve son d���m haricinde her d���mler �if y�n g�sterecektir.

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

    if (start==NULL)//e�er yap� bo� ise g�sterim bu �ekildedir.
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
            printf("Liste bo�");
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
        printf("L�tfen bir secim yapiniz\n");
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
