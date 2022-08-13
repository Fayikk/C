#include <stdio.h>
#include <stdlib.h>//Malloc vs için kullanılacaktır.


struct node{
    int data;
    struct node * right;
    struct node * left;
};

struct node * newNode(int data){
    struct node * new;
    new=(struct node *)malloc(sizeof(struct node));
    new->data=data;
    new->left=NULL;
    new->right=NULL;
    
    return new;
}

int main(){

//Root
struct node * root=newNode(1);//Burada öncellikle kök düğümü oluşturduk.
root->left=newNode(2);//Burada ise kökdüğümün solundaki eleman'ın atamsını yapıyoruz.
root->right=newNode(3);
root->left->left=newNode(4);
root->left->right=newNode(5);
root->right->left=newNode(6);
root->right->right=newNode(7);


    return 0;
}