#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * right;
    struct node * left;
}
//Öncellikle kökümüzün yapısını tasarlayalım.

struct node * Dugum(int data){
    struct node * kok;
    kok=(struct node *)malloc(sizeof(struct node));
    kok->data=data;
    kok->left=NULL;
    kok->right=NULL;
}


int main(){

struct node * eleman1=Dugum(1);
eleman1->left=Dugum(2);
eleman1->right=Dugum(3);
eleman1->left->left=Dugum(4);
eleman1->left->right=Dugum(5);
eleman1->right->left=Dugum(6);
eleman1->right->right=Dugum(7);
//Şeklinde ifade edilebilir ancak esnek bir yapıda değildir şuanda,esenek bir yapı kazamansı için gerekli kodaları bir sonraki projede yazacağız.



    return 0;
}