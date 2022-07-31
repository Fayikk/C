#include <stdio.h>
#include <stdlib.h>

//Fayik Veznedaroğlu
typedef struct eleman{
	int deger;
	struct eleman *sonraki;
}Eleman;

typedef struct liste{
	Eleman* baslangic;
	int elemanSayisi;
}Liste;

void menuGoster(){
	printf("\n ----------\n        [Menu]     \n-------------------\n");
	printf("1.listetyi yazdir\n");
	printf("2.listeye eleman ekle \n");
	printf("3.listeye eleman çıkar \n");
	printf("0. Cikis\n");
	printf("Seciminizi giriniz");
};
void hazirla(Liste* liste){
	liste->baslangic = (Eleman*) malloc(sizeof(Eleman));
	liste->baslangic->sonraki=NULL;
	liste->elemanSayisi=0;
};
void Yazdir(Liste *liste){
	printf("Listedeki elemanlar= %d  \n",liste);
	printf("\n Listedeki Eleman Sayisi:%d \n",liste->elemanSayisi);
	Eleman* ptr=liste->baslangic;
	int i = 1;
	while(ptr->sonraki !=NULL){
		printf("%2d. eleman:%d\n",i,ptr->sonraki->deger);
		ptr=ptr->sonraki;
		i++;
	}
};
void Cikar(Liste *liste,int sira)
{
	if(sira<1 || sira>liste->elemanSayisi){
		printf("\n Gecersiz Deger!");
		return;
	}
	liste->elemanSayisi--;
	//tek eleman varsa özel işlem
	if(liste->elemanSayisi==1){
		free(liste->baslangic->sonraki);
		liste->baslangic->sonraki=NULL;
		return;
	}

	//Çikarma işlemi burada yapılıyor.
	Eleman* ptr=liste->baslangic;
	int i=0;

	//Çikarilacak elemana kadar git
	while (i<sira-1)
	{
		ptr=ptr->sonraki;
		i++;
	}
	Eleman *temp=ptr->sonraki;
	ptr->sonraki=ptr->sonraki->sonraki;
	free(temp);

};
//şimdide listeye yeni eleman ekleyelim.

void Ekle(Liste *liste,int deger){
	Eleman* yeniEleman =(Eleman*) malloc(sizeof(Eleman));
	yeniEleman->deger=deger;
	if (liste->elemanSayisi==0)
	{
		liste->baslangic->sonraki=yeniEleman;
	}
	else{
		Eleman* ptr=liste->baslangic;
		int i=0;
		while (i<liste->elemanSayisi)
		{
			ptr=ptr->sonraki;
			i++;
		}
		ptr->sonraki=yeniEleman;
	}
	yeniEleman->sonraki=NULL;
	liste->elemanSayisi++;
};

int main(int argc, char *argv[]) {
Liste liste;
hazirla(&liste);
int secim ,sira,deger;
while(1){
    menuGoster();
    scanf("%d",&secim);
    switch(secim){
        case 1://Yazdırma işlemi
        Yazdir(&liste);
        break;
        case 2://Ekleme işlemi
        scanf("%d",&deger);
        Ekle(&liste,deger);
        break;
        case 3://Çıkarma işlemi
        printf("\n listedeki eleman sayisi %d:" ,liste.elemanSayisi);
        printf("\n listeden kaçıncı eleman çıkarılsın?");
        scanf("%d",&sira);
        Cikar(&liste,sira);
        break;
        default:    	
			printf("Gecesiz secim yaptınız bir daha deneyiniz!");
			break;
    }
	// printf("****************---> %d \n",liste);
}	
	return EXIT_SUCCESS;
}
