#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};
struct node * temp=NULL;
struct node * start=NULL;

void arayaEkleme(int number,int n){
    struct node * eklenen;
    eklenen=(struct node*)malloc(sizeof(struct node));
    temp=start;
    while (temp->next->data!=n)
    {
        temp=temp->next;

    }
    //bir boş değişken daha oluşturalım.
    struct node * temp2;
    temp2=(struct node *)malloc(sizeof(struct node));
    temp2=temp->next;
    temp->next=eklenen;
    eklenen->next=temp2;
    


}


int main(){





    return 0;
}