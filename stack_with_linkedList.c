#include <stdio.h>
//Dinamik stack yapısı tasarlayalım.
struct node{
    int data;
    struct node * next;//bir sonraki düğüme geçmek için kullanılacaktır.
};
struct node * temp=NULL;
struct node * top=NULL;//top değişkeni yığına eklenen en son veriyi gosterecektir.

void push(int value){
    struct node * eklenen;
    eklenen=(struct node *)malloc(sizeof(struct node));
    eklenen->data=value;
    if (top==NULL)
    {
        top=eklenen;
        eklenen->next=NULL;
    }
    else
    {
       eklenen->next=top; 
       top=eklenen;
    }  
}
void pop(){
    //stack yapısından eleman çıkarm aişlemi top işleminden gerçekleşecektir.
    //Çıkarılan top eleman,top unvanını bir sonraki değer aktarmak zorundadır.
    if (top==NULL)
    {
        printf("Yıgın yapısında çıkarılacak eleman yoktur");
    }
    else
    {
        if (top->next==NULL)
        {
            printf("Dizide 1 eleman vardır anlamında gelmektedir");
            free(top);
        }

        else
        {
            printf("Stack'ten çıkarıldı: %d",top->data);
            temp=top->next;
            free(top);
            top=temp;
        
        }
    }
}
void print(){//yazdırma işleminde dizilerden farklı olarak NULL değer eşit olana kadar while yazılabilirç.
        
        
        if(top==NULL){
            printf("Yzdırılacak eleman bulunmamaktadır");
        }
        
        else{

        temp=top;
        while (temp->next!=NULL)
        {
            
            printf("%d",temp->data);
            temp=temp->next;
        }
            printf("%d",temp->data);

        }}
void peek(){
//Bu fonksiyon stack'TEKİ top elemanı gosterecektir.
if (top==NULL)
{
    printf("stack'te eleman bulunmamaktadır.");

}
else
{
    printf("top eleman: %d",top->data);
}



}        
           
    

int main()
{

push(1);
push(2);
push(3);
push(4);
pop();
    return 0;
}