#include <stdio.h>
#define boy 10
int dizi[boy];
int bas=-1;
int son=-1;
void Eleman_Ekle(int value){
    //Kontrol sağlayalım
    if (son==boy-1)
    {
        printf("Kuyruk doludur eklenecek eleman için yer yoktur");

    }
    else
    {
        //Kuyruktaki tek eleman için bir kontrol sağlayalım.
        if (bas==-1)
        {
            bas=0;
            son++;
            dizi[son]=value;
        }
    }
}
void Eleman_Cikar(){
//kontrol sağlanmalı kuyurukta eleman olmayabilir.
    if (bas==-1 || bas>son)
    {
        printf("Kuyrukta silinecek eleman bulunmamaktadır");
        bas=-1;
        son=-1;
    }
    else
    {
        //son bir şekilde değişmemektedir ancak bas değerinin indis değeri artmaktadır.
        bas++;
        
    }
    
}
void listele(){
    //Yine bir kontrol sağlayalım
    if (bas==-1)
    {
        printf("Listelenecek eleman bulunmamaaktadır.");
    }
    else
    {
        int i;
        for (i = bas; i < son; i++)
        {
            printf("%d",dizi[i]);
        }
        
    }
    

}
int main(){

while (1)
{   
    int secim,deger;
    
    printf("1)Eleman ekle\n");
    printf("2)Eleman çıkar \n");
    printf("3)Listele \n");
    printf("4)Cikis\n");

    printf("Seciminizi yapınız=\n");
    scanf("%d",&secim);
    switch (secim)
    {
    case 1:
        printf("Eklemek istediginiz degeri giriniz");
        scanf("%d",&deger);
        Eleman_Ekle(deger);
        break;
    case 2:
        Eleman_Cikar();
        break;
    case 3:
        listele();
        break;
    case 4:
        return 0;        
    default:
        break;
    }
}




    return 0;
}