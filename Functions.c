#include <stdio.h>
#include <string.h>
//Fonksiyon tanımlamasını burada yapalım
void test(int a){
    a +=1;
    printf("%d",a);
}

int addArray(int a[],int lenght){

    int total=0;
    int i;
    for (i  = 0; i < lenght; i++)
    {
        total+=a[i];
    }
    
}
int main(){

int dizi[]={1,2,3,4,5};

printf("%d\n",addArray(dizi,4));
test(5);

    return 0;
}