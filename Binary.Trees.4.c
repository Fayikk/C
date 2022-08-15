#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * right;
    struct node * left;
};

struct node * Dugum_Ekle(int veri){
    struct node * root;
    root=(struct node *)malloc(sizeof(struct node));
    root->data=veri;
    root->right=NULL;
    root->left=NULL;

    return root;
}


struct node * Eleman_EKLE(struct node * root,int veri){
    if (root==NULL)
    {
        Dugum_Ekle(veri);
    }
    else
    {
        if (root->data>veri)
        {
            root->left=Eleman_EKLE(root->left,veri);
        }
        else
        {
            root->right=Eleman_EKLE(root->right,veri);
        }
        
        
    }
    return root;
}

//Şimdi ikili ağaç içerisinde dolaşmak için ifadelerimizi yazalım
//Preorder,postorder,Inorder ifadeleri kullanalım.


//PreOrder=(önce kök olarak geçmektedir.)root->left->right
//PostOrder=(Kök sonda olarak gerçekeleşecektir).left->right->root
//Inorder=(Kök ortada olarak gerçekleşecektir.) left->root->right
void Preorder(struct node *root){
    if (root!=NULL)
    {
        printf("%d",root->data);
        Preorder(root->left);
        Preorder(root->right);
    }
    
}

void PostOrder(struct node * root){

    if(root!=NULL){
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d",root->data);
    }
}

void InOrder(struct node * root){
    if (root!=NULL)
    {
        InOrder(root->left);
        printf("%d",root->data);
        InOrder(root->right);
    }
    
}



int main(){
    struct node * eleman=NULL;

int veri,i=0;   

while (i<7)
{
    printf("Bir sayı giriniz\n");
    scanf("%d",&veri);
    eleman=Eleman_EKLE(eleman,veri);
    i++;
}

printf("Preorder ağaçta dolaşma");
Preorder(eleman);

printf("PostOrder ağaçta dolaşma");
PostOrder(eleman);

printf("InOrder ağaçta dolaşma");
InOrder(eleman);


    return 0;
}