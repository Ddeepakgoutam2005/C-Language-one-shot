//Structures in C
#include <stdio.h>
#include <string.h>
struct Books{
        char name[50];
        char author[50];
        int price;
    }book;

void printStruct(struct Books  bk){
    printf("Book name is %s\n",bk.name);
    printf("Author name is %s\n",bk.author);
    printf("Book price is %d\n",bk.price);
}
int main(){
    struct Books bk1;
    strcpy(bk1.name,"C Programming");
    strcpy(bk1.author,"Dannis");
    bk1.price=78;
   
    printStruct(bk1);

    return 0;
}