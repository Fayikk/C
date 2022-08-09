#include <stdio.h>
#include <stdlib.h>
#define boy 5


int dizi[boy];
int bas=-1,son=-1;//front=bas,rear=son olarak adlandırılırlar.
//bas ve son değerlerini,indis olarak kullanacağız

void eleman_ekle(int veri){
    if (son==boy-1)
    {
        printf("kuyruk doludur");
    }
    else
    {
        if (bas==-1)
        {
            bas=0;
            
        }    
        son++;
        dizi[son]=veri;
    }
}
void eleman_cikar(){
    if (bas==-1|| bas >son)
    {
        printf("Kuyrukta çıkarılacak eleman yoktur.");
        bas==-1;
        son==-1;
    }
    else
    {
        bas=bas+1;
        
    }
    
    
    
}
void yazdir(){
    if(bas==-1){
        printf("Kuyruk bostur");
    }
    else
    {
        int i;
        for ( i = bas; i <= son; i++)
        {
            printf("%d",dizi[i]);
        }
        
    }
    
}
int main(){
    int secim,sayi;
    while (1)
    {
        printf("1-)ekle\n");
        printf("2-)cikar\n");
        printf("3-)yazdir\n");
        printf("4-)cikis\n");
        scanf("%d",secim);
        switch (secim)
        {
        case 1:
            printf("sayi giriniz,");
            scanf("%d",sayi);
            eleman_ekle(sayi);
            break;
        case 2:
            eleman_cikar();
            break;
        case 3:
            yazdir();
            break;
        case 4:
            return 0;
        default:
            break;
        }
    }
    




    return 0;
}