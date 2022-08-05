#include <stdio.h>
#include <stdlib.h>

struct dugum{
    int veri;
    struct dugum * gosterici;
};

struct dugum * bas=NULL;
struct dugum * gecici=NULL;

void SonaEkle(int sayi){
    struct dugum * eklenen;
    eklenen=(struct dugum *)malloc(sizeof(struct dugum));
    eklenen->veri=sayi;
    eklenen->gosterici=NULL;
    if (bas==NULL)
    {
            bas=eklenen;
    }
    else{
        gecici=bas;
        while (gecici->gosterici!=NULL)
        {
            gecici=gecici->gosterici;
        }
        gecici->gosterici=eklenen;
    }
    

}

void yazdir(){

    gecici=bas;
    while (gecici->gosterici!=NULL)
    {   
        gecici=gecici->gosterici;
        printf("%d",gecici->veri);
    }
        
}int main(){
int adet=0;

while (adet!=5)
{
    int sayi;
    
    printf("Lütfen bir sayi giriniz");
    scanf("%d",&sayi);

    SonaEkle(sayi);
    adet++;
}
yazdir();
    return 0;
}