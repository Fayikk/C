#include <stdio.h>
#include <string.h>
int main(){
    //Reference    
char name[]="Ali";
char *p = name;


int i=5;
int *p=&i;

printf("%u\n",p);
//Dereference

(*p)++;
printf("%d\n",*p);

    return 0;
}