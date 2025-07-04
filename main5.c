//********Decision Making in c********
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    if(age<18){
        printf("You cannot drve.");
    
    }
    else if (age>=18&&age<=24){
        printf("You are banned from driving");
    }
    else{
        printf("You can drive.");
    }
    //Exercise about switch statement

    int r=age>3?100:200; // Short hand if else
    printf("%d",r);
    
    return 0;
}