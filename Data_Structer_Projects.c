#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};
struct node * start=NULL;
struct node * temp=NULL;

void basa_eleman_ekleme(int number){
    struct node * eklenen;
    eklenen=(struct node *)malloc(sizeof(struct node));
    eklenen->data=number;
    eklenen->next=start;
    start=eklenen;
}
void sona_eleman_ekleme(int number){
    struct node * eklenen;
    eklenen=(struct node *)malloc(sizeof(struct node));
    eklenen->data=number;
    eklenen->next=NULL;
    if(start==NULL){
        start=eklenen;
    }
    else{
        temp=start;
        while (temp->next!=NULL)
        {
            temp=temp->next;
            
        }
            temp->next=eklenen;
        
    }



}
void bastan_eleman_silme(){
    if(start==NULL){
        printf("Silinecek eleman yoktur");
    }
    else
    {
        temp=start->next;
        free(start);
        start=temp;

    }
    


}
void sondan_eleman_silme(){
    if(start->next!=NULL){
        temp=start;
        while (temp->next->next!=NULL)
        {
            temp=temp->next;

        }
        free(temp->next);
        temp->next=NULL;
    }
    else{
        bastan_eleman_silme();
    }
}
int eleman_adedi(){
    int adet=0;
    if (start==NULL)
    {
        return 0;
    }
    else{
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
int eleman_toplami(){
    int toplam=0;
    if (start==NULL)
    {
        return 0;
    }
    else{
        temp=start;
        while (temp->next!=NULL)
        {
            temp=temp->next;
            toplam=toplam+temp->data;
        }
            toplam=toplam+temp->data;

    }
    return toplam;
}
void print(){
    if (start==NULL)
    {
        printf("Listede eleman bulunmamaktadir");
    }
    else
    {
        temp=start;
        while (temp->next!=NULL)
        {
            temp=temp->next;
            printf("Listedeki elemanlar-> %d",temp->data);
        }
        
    }
    


}
void cikis(){


    // return 0;
    printf("deneme");
}


int main(){
    int secim;
    printf("Baglı Liste proje");
    printf("Yapmak istediginiz islemi seciniz\n");
    printf("1)basa eleman ekleme\n");
    printf("2)sona eleman ekleme\n");
    printf("3)bastan eleman silme\n");
    printf("4)sondan eleman silme\n");
    printf("5)eleman adedi\n");
    printf("6)eleman toplami\n");
    printf("7)print\n");
    
    printf("Lütfen seciminizi yapın:");
    scanf("%d",secim);

    while (1)
    {
        int number;
        switch (secim)
    {
    case 1:
        printf("eklemek istediginiz elemanı seciniz");
        scanf("%d",number);
        basa_eleman_ekleme(number);
        break;
    case 2:
        printf("Sona eklemek istediginiz elemanı yazin:");
        scanf("%d",number);
        sona_eleman_ekleme(number);
        break;
    case 3:
        printf("Bastan eleman silme secildi");
        
        bastan_eleman_silme();
        break;
    case 4:
        printf("Sondan eleman silme secildi");
        sondan_eleman_silme();
        break;
    case 5:
        printf("eleman adedi");
        eleman_adedi();
        break;
    case 6:
        printf("eleman toplami");
        eleman_toplami();
        break;
    case 7:
        printf("Yazdir secildi.");
        print();
        break;            
    default:
        break;
    }
    }
    

    

    return 0;
}