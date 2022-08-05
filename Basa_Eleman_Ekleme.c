//BAŞA ELEMAN EKLEME 

#include <stdio.h>
#include <stdlib.h>

struct dugum{
    int veri;
    struct dugum * gosterici;

};

struct dugum * bas=NULL;
struct dugum * gecici=NULL;

void BasaEkle(int sayi){
    struct dugum * eklenen;
    eklenen=(struct dugum * )malloc(sizeof(struct dugum));
    eklenen->gosterici=bas;//Eleman basa ekleneceği için bas'a esit olmaktadır.
    eklenen->veri=sayi; 
    bas=eklenen;

}
void yazdir(){

    gecici=bas;
    while (gecici->gosterici!=NULL)
    {
        gecici=gecici->gosterici;
        printf("%d",gecici->veri);
        
    }
        printf("%d",gecici->veri);
}


int main(){


int adet=0;
while (adet!=5)
{
    
    int sayi;
    printf("Girmek istediginiz sayi giriniz:");
    scanf("%d",&sayi);
    BasaEkle(sayi);
    adet++;
}

yazdir();



    return 0;
}