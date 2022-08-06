#include <stdio.h>
#include <stdlib.h>
//tek yönlü listede elemanların yerini çevirme(ters)
//veri yapılarında bir sonraki düğmü göstermeye next deriz.
//bir önceki düğümü gösteriyorsa prev deriz.
struct node{

    int data;
    struct node * next;
};
struct node * start=NULL;
struct node * temp=NULL;

void ters_cevir(){
    struct node * temp2;//2.gecici değişken
    struct node * prev;//bir önceki düğümü gösterir.
    temp=start;
    
    while (temp!=NULL)//temp null'a eşit olmadığı sürece devam et anlamına gelmektedir
    {
        temp2=temp->next;//2 .düğümü göstermektedir.
        temp->next=prev;
        prev=temp;
        temp=temp2;
    }
    start=prev;//ilk düğüm olmuş olacaktr
    

}

int main(){




    return 0;
}