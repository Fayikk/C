//Ağaç veri yapısı
//Bu ağaçları pointerler ile göstereceğiz
//Verileri ise data değişkenimiz ile göstereceğiz
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * left;
    struct node * right;
};

struct node * kokdugumOlustur(int veri){
    struct node * root;
    root=(struct node *)malloc(sizeof(struct node));
    root->data=veri;
    root->right=NULL;
    root->left=NULL;    

    return root;
}
struct node * eleman_ekle(struct node * root,int veri){
    if (root==NULL)
    {
        root=kokdugumOlustur(veri);
    }
    else
    {
        //rekursif işlem yapacağız
        if (veri<root->data)
        {
            root->left=eleman_ekle(root,veri);
        }
        else
        {
            root->left=eleman_ekle(root->left,veri);
        }
    }
    return root;
    
}




int main(){




    return 0;
}