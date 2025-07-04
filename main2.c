#include <stdio.h>
int main (){
    //Relational operators
    int harry = 9, rohan = 45;
    printf("%d\n",harry==rohan);
    printf("%d\n",harry <rohan);
    printf("%d\n",harry >rohan);
    printf("%d\n",harry!= rohan);
    
    

    // Logical Operators
    int h=0 , j= 1;
    printf("The logical operators returned %d\n",h && j);
    printf("The logical operators returned %d\n",h || j);
    printf("The logical operators returned %d\n", ! j);
    printf("The logical operators returned %d\n",! h);
    
    
    
    //Bitwise Operators
    // A=60 B=14
    // A=00111100 
    //B=00001101
    //Result=00001100=12
    int A =60 , B=14;
    printf("The Bitwise and  operator returned %d\n",A &B);
    printf("The Bitwise or  operator returned %d\n",A | B);
    printf("The Bitwise xor  operator returned %d\n",A ^ B);
    printf("The Bitwise ones  operator returned %d\n", ~B);
    printf("The Bitwise left shift operator returned %d\n",A << B);
    printf("The Bitwise right shift operator returned %d\n",A>> B);


    //Assignment Operators
    // =, +=, -=, *=, %=,etc
    int ha=9;
    ha+=9;
    printf("ha is %d\n",ha);


    // Misc Operators 
    // &,*,?:
    


    return 0;
}