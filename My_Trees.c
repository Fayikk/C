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
        if(veri>root->data){
            root->right=Eleman_Ekle(root->right,veri);
        }
        else
        {
            root->left=Eleman_Ekle(root->left,veri);
        }
        
    }
    return root;
}
//Preorder=root->left->right
void PreOrder(struct node * root){
   if (root!=NULL)
   {
    printf("%d",root->data);
    PreOrder(root->left);
    PreOrder(root->right); 
   }
   
}


//Postorder=Kök sonda kuarlı geçerlidir.
//Postorder=left->right->root
void PostOrder(struct node * root){
    if (root!=NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d",root->data);
    }
    
}

//InOrder nasıl geçerli olur?
//Kök ortada kuralı geçerli olacaktır.
//left->kök->right
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

int sayi,i=0;
while (i<7)
{
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    eleman=Eleman_Ekle(eleman,sayi);
    i++;
}
printf("PreOrder: \n");
PreOrder(eleman);

printf("\nPostOrder: ");
PostOrder(eleman);

printf("\nInOrder: ");
InOrder(eleman);



    return 0;    
}