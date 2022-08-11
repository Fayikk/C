#include <stdio.h>
#include <stdlib.h>
//Recursive faktoriyel hesaplama
int faktoriyel(int value){
    if (value<=1)
    {
        return 1;
    }
    else
    {
        return value*faktoriyel(value-1);
    }
    
    
}

//girilen sayıdan 0'a kadar olan sayıların toplamı.
int toplam(int value){
    if (value<=1)
    {
        return 1;
    }
    else
    {
        return value+toplam(value-1);
    }
    
    
}

int main(){

//4+3+2+1
printf("%d \n",toplam(4));
printf("%d",faktoriyel(5));

    return 0;
}