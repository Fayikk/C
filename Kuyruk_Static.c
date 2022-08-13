#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10


int kuyruk[BOYUT];
int front=-1,rear=-1;

void Enqueue(int veri){
    //Şİmdi bir kotrol sağlayalım
    //eğer rear elemanı,boyutla aynı ise eklenecek eleman için yer yoktur demektir.
    if (rear==BOYUT)
    {
        printf("\nKuyruk Dolu");
    }
    //eğer yukarıdaki bloğa girerse,eleman ekleme işlemi gerçekleştirilmeyecektir.
    else
    {
        if (front==-1)//Kontrol->ilk kez eleman ekleniyorsa.
        {
            front=0;//Her eleman ekledikçe front değerini 1'er arttıramam,ancak front ilk elemanı tutacağından dolayı,front değerini ilk indis olan "0" indisine eşitlememiz gerekecektir.
            rear=rear+1;//Kuyruğa eleman eklemesi yapılınca kuyruğun en arkadan 1'er adım ilerlemesi gerekecektir.
            kuyruk[rear]=veri;
        }
        
    }
}

void Kuyruktan_Eleman_Cikarma(){
    //Kuyruktan eleman çıkarmak içinde bir kontol sağlamamız gerekecektir.
    if (front==-1 || front>rear)
    {
        printf("Kuyrukta çıkartılacak eleman yoktur");
        front=-1;
        rear=-1;
        //Şimdi bir düşünelim,diyelimki kuyrukta eleman ya hiç yoktur yada 
    }
    else
    {
        
        front++;

    }
}

void display(){
    if (front==-1)
    {
        printf("Listede listelenecek eleman bulunamamaktadır");
    }
    else
    {
        int i;
        for ( i = front; i <= rear; i++)
        {
            printf("%d",kuyruk[i]);
        }
            printf("%d",kuyruk[i]);
        
    }
    
    
}


int main(){



    return 0;
}