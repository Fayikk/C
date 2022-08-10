#include <stdio.h>
#include <stdlib.h>
//Kuyruğun başına front,sonuna ise rear getirilmelidir.
//Ekleme işlemi sona yapılacağı için rear'ın güncellenmesi gerekiyor.
//Silme işlemi baştan yapılacağı için,front'un güncellenmesi gerekmektedir.
//KUYRUK BOŞKEN front ve rear ifadeleri NULL değerini gösterecektir.
//Kuyrukta 1 eleman varken hem kuyruk jemde rear o elemanı gösterecektir.
//Kuyrukta birden fazla eleman var ise front kuyruğun en başındaki elemanı
// Kuyrukta birden fazla eleman var ise rear kuyruğun en sonundaki elemanı gösterecektir.

struct node{
    int data;
    struct node * next;
};
//Kuyruğun başını ve sonunu gösterecek pointer'lara ihtiyacımız var.
struct node * front=NULL;
struct node * rear=NULL;
struct node * temp=NULL;
//Enqueue
int enqueue(int data){
    //kuyruğun boş olma durumunu kontrol edelim.
    if(front==NULL){
        struct node * eleman;
        eleman=(struct node *)malloc(sizeof(struct node));
        eleman->data=data;
        eleman->next=NULL;
        front=rear=eleman;//new'in gösterdiği değerleri front ve rear2da göstermiş olacaktır.,
    }
    //Queue is empty
    else
    {
        struct node * eleman;
        eleman=(struct node *)malloc(sizeof(struct node));
        eleman->data=data;
        eleman->next=NULL;
        rear->next=eleman;
        rear=eleman;
    }
    
}

void display(){

    if(front==NULL){
        printf("Kuyrukta eleman bulunmamaktadır");
    }
    else
    {
        printf("Queue: ");
        temp=front;
        while (temp->next!=NULL)
        {
            
            printf("%d - ",temp->data);
            temp=temp->next;
        }
        printf("%d - ",temp->data);
        
    }
    


}
int dequeque(){
    if (front==NULL)
    {
        printf("Kuyrukta çıkartılacak eleman bulunmamaktadır");
        return 1;
    }
    else
    {
        temp=front->next;
        free(front);
        front=temp;
    }
    
    
}
//Main
int main(){

    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    dequeque();
    display();

    return 0;
}