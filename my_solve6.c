#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};
struct node * temp=NULL;
struct node * start=NULL;

int eleman_adedi(){
    int adet=0;
    
    if(start==NULL){
        return adet;


    }
    else{
        temp=start;
        while (temp->next!=NULL)
        {
            temp=temp->next;
            adet++;
        }
        adet++;
    }



}


int maiN(){






    return 0;
}