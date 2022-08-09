#include <stdio.h>

struct node{
    int data;
    struct node * next;
    struct node * prev;
};
struct node * start=NULL;
struct node * temp=NULL;
struct node * temp2=NULL;
struct node * next=NULL;
struct node * prev=NULL;

void basa_ekle(int number){
    struct node * eleman;
    eleman=(struct node *)malloc(sizeof(struct node));
    eleman->prev=NULL;
    eleman->data=number;

    if (start==NULL)
    {
        start=eleman;
        eleman->next=NULL;
        
    }
    else
    {
        eleman->next=start;
        start->prev=NULL;
    }
}
void sona_ekle(int number){

    struct node * eleman;
    eleman=(struct node *)malloc(sizeof(struct node));
    eleman->next=NULL;
    eleman->data=number;

    if (start==NULL)
    {
        
        // eleman->prev=NULL;
        start=eleman;
        start->next=NULL;
        start->prev=NULL;
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
        eleman->next=NULL;
        }
        
        
    }
    
    
}

void bastan_sil(){


    if (start==NULL)
    {
        printf("Silinecek eleman bulunmamaktadir");
    }
    else
    {
        if (start->next==NULL)
        {
            free(start);
            start->next=NULL;
            start->prev=NULL;
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
        printf("Siinecek eleman yoktur");
    }
    else
    {
        if (start->next==NULL)
        {
            free(start);
            printf("Listedeki tek eleman silindi ve artık silinecek eleman bulunmamaktadır.");

        }
        else
        {
            temp=start;
            while (temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp2=temp->prev;
            free(temp);
            temp2->next=NULL;
        }
        
    }
    
    
}

void eleman_sayisi(){
    int adet;
    if(start==NULL){
        printf("Listede eleman bulumamaktadır");
    }
    else
    {
        temp=start;
        while (temp->next!=NULL)
        {
            
            printf("%d",temp->data);
            temp=temp->next;
            adet++;
        }
            printf("%d",temp->data);
        
        adet++;
        printf("Listedeki eleman sayisi: %d",adet);
        
    }
    
}
void elemanlar_toplami(){
    int toplam=0;
    if (start==NULL)
    {
        printf("Listede eleman bulunmamaktadir");
    }
    else
    {
        temp=start;
        while (temp->next!=NULL)
        {
            temp=temp->next;
            toplam=toplam+temp->data; 
        }
            toplam=toplam+temp->data; 

        printf("%d",toplam);
        
    }
    
    
}

void listele(){
    if (start==NULL)
    {
        printf("listede gösterilecek eleman yoktur.");
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


sona_ekle(6);
sona_ekle(5);
sona_ekle(4);

basa_ekle(1);
sona_ekle(2);
// bastan_sil();
// sondan_sil();
printf("\n");

// eleman_sayisi();

elemanlar_toplami();printf("\n");
listele();


    return 0;
}