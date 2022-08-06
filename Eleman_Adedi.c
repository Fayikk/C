#include <stdio.h>
#include <stdlib.h>
//Elemanların kaç adet olduğunu gösteren metodu yazalım
//Geri dönüş değeri olasn bir metod yazalım.

struct node
{
    int data;
    struct node * next;
};
struct node * temp=NULL;
struct node * start=NULL;


int elemanSayi(){
    int adet=0;
    
    if (start==NULL)
    {
        return adet;
    }
    else
    {
        temp=start;
        while (temp->next!=NULL)
        {
            adet++;
            temp=temp->next;
        }
        adet++;
        return adet;
    }
    
    




}

int main(){






    return 0;
}