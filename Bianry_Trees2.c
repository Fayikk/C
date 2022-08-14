#include <stdio.h>
#include <stdlib.h>

// struct node{
//     int data;
//     struct node * right;
//     struct node * left;

// };

// struct node * dugumOlustur(int veri){
//     struct node * root;
//     root=(struct node *)malloc(sizeof(struct node));
//     root->data=NULL;
//     root->right=NULL;
//     root->left=NULL;
//     return node;
// }

// struct node * Eleman_Ekle(struct node * root,int veri){
//     if (root==NULL)
//     {
//         dugumOlustur(veri);
//     }
//     else
//     {
//         if (root->data>veri)
//         {
//             root->left=Eleman_Ekle(root->left,veri);
//         }
//         else
//         {
//             root->right=Eleman_Ekle(root->right,veri);
//         }
        
        
//     }    
// }

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
        Dugum_Olustur(veri);
    }
    else
    {
        if(root->data<veri){
            root->right=Eleman_Ekle(root->right,veri);
        }
        else
        {
            root->left=Eleman_Ekle(root->left,veri);
        }
        
    }
    return root;
}
//Şimdi ağaç yapımızın içerisinde dolaşalım.
//Üç farklı dolaşma yöntemi mevcuttur.
//PreOrder,PostOrder,InOrder şeklinde 3 farklı dolaşma şeklimiz vardır.

//PREORDER:ROOT->LEFT->RİGHT şeklindedir.
void PreOrder(struct node * root){
    if (root!=NULL)
    {
        printf("%d",root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

//INORDER=Kök ortada anlamına gelmektedir.
void InOrder(struct node * root){
    if (root!=NULL)
    {
        InOrder(root->left);
        printf("%d",root->data);
        InOrder(root->right);
    }
    
}

//PostOrder=Kök sonda anlamına gelmektedir.
void PostOrder(struct node * root){
    if (root!=NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d",root->data);
    }
    
}


int main(){

struct node * eleman=NULL;
int sayi,i=0;

while (i<7)
{
    printf("Sayi girin: \n");
    scanf("%d",&sayi);
    eleman=Eleman_Ekle(eleman,sayi);
    i++;
}
printf("PreOrder:\n");
PreOrder(eleman);


printf("InOrder:\n");
InOrder(eleman);



printf("PostOrder:\n");
PostOrder(eleman);

    return 0;
}