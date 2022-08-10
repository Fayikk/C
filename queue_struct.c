//Kuyuruk yapısı
// A<-B<- C<- D <-E<- F ŞEKLİNDE GERÇEKLEŞİR.
//Yukarıda A front düğüm olurken,E düğümü ise rear düğüm olarak adlandırılırlar.
//Eğer A düğümü bir silme metodu ile silinirse vb bir işlme yapılırsa.Hemen ardınan gelen B front olacaktır.

//Kuyruk yapılarında her zaman ilk giren ilk çıkar kuralına uygun hareket eiilmelidir.
//Yada last ın last out kuralı geçerlilik gösterecektir.
//Bankamitikte işlem yapmak için sıraya giren müşterilere örnek olarak verilebilir.
//Kuyruk veri yapısını 2 farklı şekilde gösterebiliriz.Ya diziler ile yada bağlı listeler ile gösterimi yapılabilirler.
//Bu projede diziler ile olan gösterimini gerçekleştireceğiz.
#include <stdio.h>
#define boy 10

int dizi[boy];
int bas=-1,son=-1;//bas front iken,son rear'ı ifade etmektedir.e
//Yukarıda görüldüğü gibi bas ve son değerlerline -1 değer ataması yaptık.
//Bunun sebebi ise kuyruk için oluşturduğumuz dizinin indeksi 0 tabanlı indisleme'ye sahiptir.
//Eleman ekleme işlemlerinde 1 değer arttırılırsa dizinin ilk elemanının indis'i '0' olacaktır.
//Eleman eklemek için bir metod oluşturalım.
 void ElemanEkle(int value){

    if (son==boy-1)//son değerimizi biz indis olarak kullanmaktayız.
    {
        printf("Kuyruk doludur");
    }
    else{
        //Eğer kuyurukta hiç eleman yoksa 
        if (bas==-1)
        {
            bas=0;   
        }
        son++;
        dizi[son]=value;
    }
 }
void Eleman_Cikar(){
    if (bas==-1 || bas>son)
    {
        printf("Kuyruk boştur \n");
        bas=-1;
        son=-1;

    }
    else
    {
        bas=bas+1;
    }
}
void yazdir(){
    if (bas==-1)
    {
        printf("Kuyruk boş");
    }
    else
    {
        int i;
        for ( i = bas; i < son; i++)
        {
            printf("%d",dizi[i]);
        }
        
    }
    
    
}

int main()
{
    return 0; 
}