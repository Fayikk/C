#include <stdio.h>
struct node{
    int data;
    struct node * next;
};
struct node * temp=NULL;
struct node * front=NULL;//bastaki düğümü tutar.
struct node * rear=NULL;//Kuyruktaki son düğümü tutar

void elemanEkle(int veri){
    struct node * eleman;
    eleman=(struct node *)malloc(sizeof(struct node));
    eleman->data=veri;

    if (front==NULL)//kuyruk boş ise bu işlem gerçekleştirilir.
    {
        front=eleman;
        front->next=front;
        rear=eleman;
        rear->next=NULL;
    }
    else if (front->next==front)
    {
        rear->next=eleman;
        rear=eleman;
        rear->next=NULL;
        front->next=rear;
    }
    else
    {
        rear->next=eleman;
        rear=eleman;
        rear->next=NULL;

    }
    
    
    


}
void eleman_cikar(){
    if(front==NULL)
    printf("Kuyruk boştur");
    else
    {
        temp=front->next;
    }
    
}
int main(){





    return 0;
}