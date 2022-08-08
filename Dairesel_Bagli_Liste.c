#include <stdio.h>
#include <stdlib.h>
//Tek yönlü doğrusal bağlı listenin normal bağlı listeden farkı sadece sondaki düğüm NULL yerine aştaki düğümü göstermektedir.

struct node{
    int data;
    struct node * next;
};
struct node * start=NULL;
struct node * temp=NULL;
struct node * prev=NULL;
struct node * last=NULL;


void basa_ekle(int sayi){
    struct node * eleman;
    eleman=(struct node *)malloc(sizeof(struct node));
    eleman->data=sayi;

    if (start==NULL)
    {
        start=eleman;
        start->next=start;

    }
    else
    {
        temp=start;
        while (temp->next!=start)
        {
            temp=temp->next;
        }
        temp->next=eleman;
        eleman->next=start;
        start=eleman;
        
    }
    
}
void listele(){

    if (start==NULL)
    {
        printf("Listede gosterilecek eleman yoktur.");
    }
    else
    {
        temp=start;
        while (temp->next!=start)
        {   
            printf(" %d",temp->data);
            temp=temp->next;

        }
            printf("%d",temp->data);
    }
    
}
void bastan_sil(){
    if (start==NULL)
    {
        printf("Silinecek eleman yoktur");

    }
    else
    {
        if(start->next==start){
            free(start);
            start=NULL;
        }
        else{
            
            last=start;
            while (last->next!=start)
            {
                last=last->next;
            }
            temp=start->next;
            free(start);
            last->next=temp;
            start=temp;
            
        }
    }
    
    


}
void sondan_sil(){
    if(start!=NULL){
        printf("Silinecek eleman bulunamamaktadır");

    }
    else
    {
        if (start->next=start)
        {
            free(start);
            start=NULL;
        }
        
        last=start;
        while (last->next->next!=start)
        {
            last=last->next;
            
            
        }
        temp=last;
        free(last->next);
        last->next=temp;
        start=temp;
    }
    
}


int main(){
    int secim,sayi;

    while (1)
    {
        printf("1-->basa eleman eklemek icin\n");
    printf("2-->basa eleman eklemek icin\n");
    printf("3-->bastan eleman silmek icin\n");
    printf("4-->sondan eleman silmek icin\n");
    printf("5-->listele\n");
    printf("seciminizi yapiniz: ");
    scanf("%d",&secim);

    switch (secim)
    {
    case 1:
        printf("basa eklenencek sayi: ");
        scanf("%d",&sayi);
        basa_ekle(sayi);
        break;
    case 3:
        printf("BASTAN eleman silmek icin");
        bastan_sil();    

    case 4:
        printf("Sondan eleman silmek icin");
        sondan_sil();    
    case 5:
        listele();
    default:
        break;
    }


    }
    


    



    return 0;
}