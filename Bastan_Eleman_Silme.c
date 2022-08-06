#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node * next;
};
struct node * temp=NULL;
struct node * start=NULL;

void BasSil(){
    temp=start->next;
    //Silme komutu(metodu,fonksiyonu) her ne demek istersek silme işlemini gerçekleştiriyoruz.
    free(start);
    start=temp;
}



int main(){

    


    return 0;
}