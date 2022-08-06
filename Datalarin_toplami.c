#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node * next;
};

struct node * temp=NULL;
struct node * start=NULL;

int data_sum(){
    int sayac=0;
    if (start==NULL)
    {
        return 0;
    }
    else{

        temp=start;
        while (temp->next!=NULL)
        {
            sayac=sayac+temp->data;
            temp=temp->next;//her döngüde bir sonraki düğüme geç demektir.
            
        }
            sayac=sayac+temp->data;

        
    }
    return sayac;




}


int main(){





    return 0;
}