#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * right;
    struct node * left;
};

struct node * Dugum_Olustur(int veri){
    struct node * root;
    root=(struct node *)malloc(sizeof(struct node));
    root->data=veri;
    root->left=NULL;
    root->right=NULL;
    
    return root;
}

struct node * Eleman_Ekle(struct node * root,int veri){    
    if (root==NULL)
    {
        root=Dugum_Olustur(veri);
    }
    else
    {
        if (veri<root->data)
        {
            root->left=Eleman_Ekle(root->left,veri);
        }
        else
        {
            root->right=Eleman_Ekle(root->right,veri);
        }
    } 
}
//Şimdi ağaç içerisinde dolaşma işlemini gerçekleştirelim.

PreOrder(struct node * root){
    if (root!=NULL)
    {
        printf("%d",root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

PostOrder(struct node * root){
    if (root!=NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d",root->data);
    }
    
}

InOrder(struct node * root){
    if (root!=NULL)
    {
        InOrder(root->left);
        printf("%d",root->data);
        InOrder(root->right);
    }
    
}

int main(){





    return 0;
}