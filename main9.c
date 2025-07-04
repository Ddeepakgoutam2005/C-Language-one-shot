// Pointer in C
#include <stdio.h>
int main(){
    int a = 98;
    printf("%d\n",a);
    int* ptr = NULL;
    if (!ptr){         // To check whether pointer is null or not .
        printf("pointer is not null\n");
    }
    ptr = &a;
    *ptr = 188;
    printf("%d",a);
    
    
    
    
    return 0;

}