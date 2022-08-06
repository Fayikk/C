#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};
struct node * temp=NULL;
struct node * start=NULL;

void SondanSil(){
    
    if (start->next!=NULL)
    {
        temp=start;
        while (temp->next->next!=NULL)
        {
            temp=temp->next;

        }
        free(temp->next);
        temp->next=NULL;
        
    }
    else{
        //Baştan silme fonksiyonu cağrılmalıdır.
    }
}
void AradanSil(int veri){
    temp=start;
    if (temp->data==veri)
    {
        //Bastan sil metodu uygulanmalı.
    }
    else{

        struct node * temp2;
        temp2=(struct node *)malloc(sizeof node);
        while (temp->next->data!=veri)
        {
            temp=temp->next->next;
        }
        if (temp->next->data==NULL)
        {
            //Sondan sil metodu cagrilir.
        }
        else
        {
            temp2=temp->next;
            free(temp->next);
            temp->next=temp;
        }
        
        
        
    }
}
int main(){





    return 0;
}