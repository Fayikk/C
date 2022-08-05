#include <stdio.h>
#define boy 10//boy isimlil değişkene 10 değerini atamış olduk
struct yigin{
    int dizi[boy];
    int indis;


};
//Bir düğüm oluşturalım
struct yigin y1;

void ElemanEkle(int s1){
    if (y1.indis==boy-1)
    {
        printf("yigin doludur.");
    }
    else{
        y1.indis++;
        y1.dizi[y1.indis]=s1;
    }  
}
void ElemanCikar(){

    if(y1.indis==-1){
        printf("yıgından cıkarılacak eleman yoktur");
    }
    else{
        int cikan_sayi=y1.dizi[y1.indis];
        y1.indis--;
        printf("%d sayisi yigindan cikarildi",cikan_sayi);

    }

}

void Yazdir(){
    int i;
    if(y1.indis==-1){
        printf("yiginda gösterilecek eleman yoktur.");
    }
    else{
        for ( i = 0; i < y1.indis+1; i++)
        {
            printf("%d\n",y1.dizi[i]);
            
        }
        

    }


}

int main(){

y1.indis=-1;
int secim,sayi;

while ( 1)
{
    printf("TIĞIN (stack)\n");
printf("1--->eleman ekleme\n");
printf("2--->eleman cikarma\n");
printf("3--->eleman yazdir(display)\n");
printf("4--->Cikis \n");
printf("seciminizi yapin:");
scanf("%d",&secim);
switch (secim)
{
case 1:
printf("eklenecek sayi");
    scanf("%d",&sayi);
    ElemanEkle(sayi);
    /* code */
    break;
case 2:
 
    ElemanCikar();
    break;
case 3:
    Yazdir();
    break;
case 4:
    printf("Program kapatildi\n");
    return 0;        
default:
    break;
}

}






    return 0;
}