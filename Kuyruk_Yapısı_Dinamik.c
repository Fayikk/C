#include <stdio.h>

struct node{
    int data;
    struct node * next;  
};
struct node * temp=NULL;
struct node * front=NULL;//Baştaki düğümü tutar
struct node * rear=NULL;//Kuyruktaki son düğümü tutar.

void Eleman_Ekle(int value){
    struct node * eleman;
    eleman=(struct node *)malloc(sizeof(struct node));
    eklenen->data=value;
    if (front==NULL)
    {
        front=eleman;
        front->next=eleman;
        rear=eleman;
        rear->next=NULL;
    }
    else if (front->next==front)
    {
        rear->next=eleman;
        rear=eleman;
        front->next=rear
    }
    
    
    
    
}
int main(){




    return 0;
}