#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * right;
    struct node * left;
};


struct node * dugum(int veri)
{
    struct node * eleman;
    eleman=(struct node *)malloc(sizeof(struct node));
    eleman->data=veri;
    eleman->left=NULL;
    eleman->right=NULL;
}
int main(){

struct node * eleman1=dugum(1);
eleman1->left=dugum(2);
eleman1->right=dugum(3);
eleman1->left->left=dugum(4);
eleman1->left->right=dugum(5);
eleman1->right->left=dugum(6);
eleman1->right->right=dugum(7);

printf("%d",eleman1->left->data);//Şeklinde yazdırma işlemi gerçekleştirilebilir.

//Şeklinde kabataslak bir biçimde ikili ağaç yapısı oluştururlabilir.
//İkili ağaçta dikkat edilmesi gereken en önemli husus.Ağacın kökten itibaren her child'ın sol tarafı,
//Kökten daha küçük değere almalıdır.Kök'ün sağ tarafı ise,Kökten daha büyük değer almalıdır.






    return 0;
}