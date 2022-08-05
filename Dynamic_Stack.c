#include <stdio.h>


//dinamik yapıda bellek esneklik gösteerecektir.Boyut belirtmemize gerek yoktur.
//Bağlı listeler mantığı ile  gerçekleştirilecektir.





struct node{
    int data;
    struct node* next;//bir sonraki düğüme geçmek için nu yapıyı kullanacğız. 
    
};
struct node* temp=NULL;//son elemandan sonra null değer döndüremesi yapacaktır.
struct node* top=NULL;


void push(int veri){
    struct node* eleman=(struct node *)malloc (sizeof(struct node));//Burada bellek ayırma işlemini gerçekleştirdik.
    eleman->data=veri;
    if(top==NULL){

        top=eleman;
        top->next=NULL;
    }
    else{
        eleman->next=top;
        top=eleman;
    }
}

void pop(){
    //lıfo kuralına uygun olmalıdır.
    if(top==NULL){
        printf("Stack bostur");
    }
    else{
        printf("Cikarilan eleman:: %d",top->data);//Cikarilan eleman top'ın datasıdır anlmaına gelmektedir.(->) 
        temp=top->next;
        free(top);//free komutu ile top silme işlmeini gerçekleştirmiş olduk.
        top=temp;

    }
}
void print(){

    if(top==NULL){
        printf("stack bostur");

    }
    else{
        temp=top;
        while(temp->next!=NULL){

        printf("½d\n",temp->data);
        temp=temp->next;

        }
    }
}

//peek() fonksiyonu=elemanın top değerini bize gösteriyor
void peek(){

    if (top==NULL)
    {
        printf("Stack bostur");
        /* code */
    }
    else{
        printf("yiginin en üstündeki eleman %d\n",top->data);
    }

}

int main(){
    

        
        // printf("1)Eleman ekleme\n
        //         2)Eleman cikarma\n
        //         3)Yigin'daki elemanları yazdirma\n
        //         4)Yigindaki Top degeri gosterme\n
        //         ->>>>Lütfen seciminizi yapiniz");
        
        
    while(1){
        int secim,sayi;
        
        printf("STACK (YIGIN) ISLEMLERI");
        scanf("secim: %d",&secim);
        printf("calisti");

        switch (secim)
        {
        case 1:
        printf("calisti");
            scanf("%d",&sayi);
            push(sayi);
        printf("calisti");

            break;
        case 2:
            printf("%d elemani cikarildi ",top->data);  
            pop();  
            break;

        case 3:
            print();
            printf("yazdirma islemi gerceklestirildi");
            break;

        case 4:
            printf("%d elemani stack'in en üstündeki elemandir.",top->data);
            peek();        
            break;
        default:
            return 0;
        }        
        
    }



    return 0;
}