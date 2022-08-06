#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};
struct node * temp=NULL;
struct node * start=NULL

void ters_dondurme(){
    //iki değişken oluşturalım previous ve geçici yer tutucu işimize yarayacaktır
    struct node * prev;
    struct node * temp2;
    temp=start;
    while (temp!=NULL)
    {
        temp2=temp->next;
        temp->next=prev;
        prev=temp;
        temp=temp2;
    }
    start=prev;
}


int main(){







    return 0;
}