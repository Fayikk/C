#include <stdio.h>
#include <stdlib.h>
//stack yapsısına eleman ekleme işemi
struct node{
    int data;
    struct node * next;

};  
struct node * top=NULL;
struct node * temp=NULL;


void push(int value){
    //Eğer stack yapısı boş ise
    if (top==NULL)
    {
        struct node * eleman;
        eleman=(struct node *)malloc(sizeof(struct node));
        eleman->next=NULL;
        eleman->data=value;
        top=eleman; 
    }
    else
    {
        struct node * eleman;
        eleman=(struct node *)malloc(sizeof(struct node));
        eleman->data=value;
        eleman->next=top;
        top=eleman;

    }
}

void pop(){
    if (top==NULL)
    {
        printf("Yigin yapısında siinecek eleman yoktur");
    }
    else
    {
        temp=top->next;
        free(top);
        top=temp;
    }
    
    
}

void listele(){
    if (top==NULL)
    {
        printf("Listelenecek eleman bulunamadı.");

    }
    else
    {
        temp=top;
        while (temp->next!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;
        
        }
            printf("%d",temp->data);
        
    }
    
    
}



int main()
{
push(1);
push(2);
push(3);
push(4);
push(5);
pop();
listele();


    return 0;
}