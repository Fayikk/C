#include <stdio.h>

struct dugum{

    int veri;
    struct dugum * gosterici;

};


int main(){

struct dugum * bir;

bir=(struct dugum * )malloc(sizeof(struct dugum));

struct dugum * iki;

iki=(struct dugum * )malloc(sizeof(struct dugum));

struct dugum * uc;

uc=(struct dugum * )malloc(sizeof(struct dugum));


struct dugum * dort;

dort=(struct dugum * )malloc(sizeof(struct dugum));
    
    
bir->veri=1;
bir->gosterici=iki;

iki->veri=2;
iki->gosterici=uc;

uc->veri=3;
uc->gosterici=dort;

dort->veri=4;dort->gosterici=NULL;

printf("%d-%d-%d-%d",bir->veri,iki->veri,uc->veri,dort->veri);    
    
    
    
    
    
    return 0;
}