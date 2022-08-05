#include <stdio.h>
#include <stdlib.h>

struct node{

    int data;
    struct node* next;
};
struct node * temp=NULL;
struct node * start=NULL;

void AddLast(int number){

    struct node * Add;
    Add=(struct node *)malloc(sizeof(struct node));
    Add->data=number;
    Add->next=NULL;

    if(start==NULL){
        Add=start;
    }
    else{
        temp=start;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=Add;
    }

}

void FirstAdd(int number){
    struct node * Add;
    Add=(struct node *)malloc(sizeof(struct node));
    Add->data=number;
    Add->next=start;
    start=Add;
}
void print(){
    temp=start;
    while (temp->next!=NULL)
    {
        temp=temp->next;
        printf("%d",temp->data);
    }
        printf("%d",temp->data);
}
int main(){

int chose;
int number;
int piece;
while (piece!=5)
{
    printf("1)LastAdd\n");
printf("2)FirstAdd\n");
printf("3)Print");
printf("Please chose:");
scanf("%d",&chose);

switch (chose)
{
case 1:
    printf("Please entry number");
    scanf("%d",&number);
    AddLast(number);

    break;

case 2 :
    printf("Please entry number");
        scanf("%d",&number);
    FirstAdd(number);
    break;
case 3:
    printf("I show your character:\n");
    print();
    break;
default:
    break;
}
}









    return 0;
}