#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};
struct node * front=NULL;
struct node * rear=NULL;
struct node * temp=NULL;

void enqueue(int value){
    
    struct node * eleman;
        eleman=(struct node *)malloc(sizeof(struct node));    
        eleman->data=value;
        eleman->next=NULL;
    if (front==NULL)
    {
        
        front=rear=eleman;
        
    }
    else
    {
        rear->next=eleman;
        
        rear=eleman;
    }
}
void dequeque(){
    if (front==NULL)
    {
        printf("Kuyrukta silinecek eleman yoktur");
    }
    else
    {
        temp=front->next;
        free(front);
        front=temp;
        
    }
    
    



}
void Display(){
    if(front==NULL){
        printf("Kuyrukta yazdırılacak eleman bulunmamaktadır");
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

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeque();
    Display();



    return 0;
}