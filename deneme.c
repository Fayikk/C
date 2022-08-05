#include <stdio.h>
#include <string.h>
int main(){
// //Bunlar c'de yorum satırlarıdır.Teklidir.
// int i=10;//noktalı virgül ile kapatılır
// short int si=20;
// long int li=30;
// double d=3.14;//daha büyük ondalıklı sayılar için kullanılıabilir.
// float e=2.112;
// char c='F';

// //Format belirleyiciler
// printf("%d %d %D %2f %f %c \n",i,si,li,d,e,c);

// printf("%d byte",sizeof(int));//bellekte kapladıkları alanı sizeof() metodu ile görebilirz.
// printf("%d byte",sizeof(double));//bellekte kapladıkları alanı sizeof() metodu ile görebilirz.
// printf("%d byte\n \n",sizeof(char));//bellekte kapladıkları alanı sizeof() metodu ile görebilirz.

// printf("%d\n",10+4);
// printf("%d\n",10+4);
// printf("%d\n",10*4);
// printf("%d\n",10/4);//int bölmesi yaptığımız için tam olan sayıya yuvarlama işlmei gerçekleştirilecektir.
// printf("%d\n\n",10%4);

// //TİP DÖNÜŞÜMLERİ
// //char->short->int->float->double
// // printf("%f",(int)(10+4.2));//casebox typecasting ile dönüşüm işlemleri gerçekleştirilebilir.


// int a=10;
// int b=20;
// int c1=30;

// a=(b+c1+10);
// a=a+2;
// a+=2;
// a--;//postfix
// --a;//prefix
// printf("%d",a);
// // printf("Hello my galaxy\n");
// // printf("Hello my galaxy2");


//Kullanıcıdan değer alma!!
// int a,b,c;
// scanf_s("%d %d %d ",&a,&b,&c);//a mızın pointer adresidir.a değeri kullanıcıdan alınan değerin inputudur.
// printf("%d %d %d ",a ,b,c);
// printf("Total: %d %d %d ",a +b+c);

//Koşul durumları
//if else if else

// int age=19;
// if(age<18){
//     printf("yaşınız 18'den kücüktür.");
// }
// else{
//     printf("yaşınız 18'den büyüktür");
// }

// int i=0;
// while (i<5)
// {
//     i++;
//     printf("i: %d \n ",i);
// }
// printf("%d",3 <4);//3 ,4TEN KÜÇÜKMÜDÜR(DOĞRU OLDUĞU İÇİN EKRANA 1 DEĞERİNİ DÖNDÜRECEKTİR.)

//Continue deyimi

// int i=0;
// while (i<10)
// {
//     printf("i: %d\n",i);
//     if (i==2 || i==5)
//     {
//             i++;
//             continue;//continue ile döngünün başına gelecektir.
//     }
//     i++;
    
// }


//Diziler(Arraylerden yararlanalım)

// int dizi[]={1,2,3,4,5};
// printf("%d",dizi[2]);//dizinin 3.elemanı 

// int i;
// for (i = 0; i < 5; i++)
// {
//     printf("eleman: %d  \n",dizi[i]);
// }
// char name[]="Ali";
// printf("%d",strlen(name));//3 elemanlı karakterden oluştuğunu göstermektedir.
// printf("%s",name);



    return 0;
}