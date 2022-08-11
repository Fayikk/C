//Tek yönlü bağlı liste
//başa eleman ekleme -
//sona eleman ekleme - 
//araya eleman ekleme - 
//baştan eleman silme -
//aradan eleman silme -
//sondan eleman silme -
//Eleman adedi -
//Elemanlar toplami - 
//Yazdir
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
    struct node * prev;
};
struct node * start=NULL;
struct node * last=NULL;
struct node * temp=NULL;
struct node * temp2=NULL;

void Basa_Ekle(int value){
    struct node * eleman;
    eleman=(struct node *)malloc(sizeof(struct node));
    eleman->data=value;
    eleman->next=start;
    start=eleman;
}
void Sona_Ekle(int value){
    struct node * eleman;
    eleman=(struct node *)malloc(sizeof(struct node));
    eleman->data=value;
    eleman->next=NULL;
    if (start==NULL)
    {
        start=eleman;
        eleman->next=NULL;
        
    }
    else
    {
        temp=start;
        while (temp->next!=NULL)
        {
            temp=temp->next;
            
        }
        temp->next=eleman;
        last=eleman;
        
    }
}

void Araya_Ekle(int value,int n){
    //Burada parametre olarak gelen 'n' indis değeri falan değildir.Direk olarak elemanın kendisidir.Eklenecek eleman ondan önce eklenecektir.
    struct node * eleman;
    eleman=(struct node *)malloc(sizeof(struct node));

    

    eleman->data=value;
    eleman->next=NULL;
    
    temp=start;
    while (temp->next->data!=n)
    {
        temp=temp->next;
    }
    temp2=temp->next;//refereansta sonra gelen eleman ekleme sırasında güme gitmesin diye geçici bir değişken ile tutuyoruz.
    temp->next=eleman;
    eleman->next=temp2;
      
}
void Bastan_Sil(){
    if(start==NULL){
        printf("Listede silineceke eleman bulunmamaktadır");
    }
    else
    {
        temp=start->next;
        free(start);
        start=temp;
    }
}
void Sondan_Sil(){
    if (start->next!=NULL)//Start2ın next i NULL değilse uygulamamız gereken metodtur
    {
        temp=start;
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        free(temp->next);
        temp->next=NULL;
        
    }
    else
    {
        Bastan_Sil();//Burada bastan silme metodu,listede tek bir eleman var ise bastan silme metodu çağrılıyor.
    }   
}

void Aradan_Sil(int n){//Buradaki "n" değeri elemanı nereden silmemiz gerektiğini belli ediyoruz.
    if (start==NULL)
    {
        printf("Listede silinecek eleman bulunmamaktadır");
    }
    else
    {
        temp=start;
        while (temp->next->next->data!=n)
        {
            temp=temp->next;
        }
        temp2=temp->next->next;
        free(temp->next);
        temp->next=temp2;     
    }

}

void Eleman_Adedi(){
    int adet;
    if (start==NULL)
    {
        printf("Listede eleman bulunmamaktadır");
    }
    else
    {
        temp=start;
        while (temp->next!=NULL)
        {
            temp=temp->next;
            adet++;
        }
            adet++;
        printf("Listedeki elemanların adedi: %d",adet);
        
    }
    
    
}

void Elemanlar_Toplami(){
    int toplam=0;
    if (start==NULL)
    {
        printf("Toplanacak eleman yoktur");
    }
    else
    {
        temp=start;
        while (temp->next!=NULL)
        {
            toplam=toplam+temp->data;
            temp=temp->next;
            
        }
            toplam=toplam+temp->data;

        printf("toplam: %d",toplam);
        
    }
    
    
}

void Yazdir(){
    if (start==NULL)
    {
        printf("Gösterilecek eleman bulunamadı");
    }
    else
    {
        temp=start;
        while (temp->next!=NULL)
        {   
            printf("%d",temp->data);
            temp=temp->next;
            
        }
            printf("%d",temp->data);
        
    }
}


int main(){
// Basa_Ekle(1);
// Basa_Ekle(2);
// Basa_Ekle(3);
// Sona_Ekle(9);
// Basa_Ekle(4);
// Basa_Ekle(5);
// Basa_Ekle(6);
// Basa_Ekle(7);

// Aradan_Sil(4);

// // Araya_Ekle(6,2);
// // Bastan_Sil();
// // Bastan_Sil();
// // Sondan_Sil();
// printf("\n");

// Eleman_Adedi();
// printf("\n");
// Yazdir();
// printf("\n");
// Elemanlar_Toplami();


while (1)
{
    int secim,deger,nereye;
    printf("TEK YONLU BAGLI LİSTE UYGULAMALARI\n");
    printf("1)Başa Eleman Ekleme\n");
    printf("2)Sona Eleman Ekleme\n");
    printf("3)Araya Eleman Ekleme\n");
    printf("4)Sondan Eleman Silme\n");
    printf("5)Aradan Eleman Sime\n");
    printf("6)bastan Eleman Silme\n");
    printf("7)Elemanlar Adedi\n");
    printf("8)Elemanlar Toplami\n");
    printf("9)Listele\n");
    printf("10)Cikis\n");


    printf("Secim yapınız:");
    scanf("%d",&secim);
    switch(secim){
        case 1:
            printf("Eklemek istediğiniz elemanı yazın");
            scanf("%d",&deger);
            Basa_Ekle(deger);
            break;
        case 2:
            printf("Eklemek istediğiniz elemanı yazın");
            scanf("%d",&deger);
            Sona_Ekle(deger);
            break;
        case 3:
            printf("Eklemek istediğiniz elemanı yazın");
            
            scanf("%d",&deger);
            printf("Hangi elemandan önce ekleme yapmak istersiniz");
            scanf("%d",&nereye);
            Araya_Ekle(deger,nereye);
            break;

        case 4:
            printf("Sondan Eleman Silme");
            Sondan_Sil();

        case 5:
            printf("Hangisinden önce silmek istersiniz");
            scanf("%d",&nereye);
            Aradan_Sil(nereye);    
            break;
        case 6:
            printf("Bastan Eleman Silme Secildi");
            Bastan_Sil();
            break;
        case 7:
            printf("Elemanların adedi: ");
            Eleman_Adedi();
            break;
        case 8: 
            printf("Elemanlar Toplami");
            Elemanlar_Toplami();
            break;
        case 9:
            Yazdir();
            break;
        case 10:
            return 0;                    
        default:
        break;

        
    }
}





}