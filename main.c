#include <stdio.h>
int main()
{
    //single line comments: compiler will ignore this
    /*
    this is a 
    multi line comment
    */
//    int,float,char

int a = 7 ;
float b = 8.0;
unsigned short integer = 8;
long integer1= 8;
short integer2 = 8;
double myfloat = 7.45;
long double myfloat2 = 7.2387648736;
char c = 't';
printf("hello %d \n",a);
printf("hello %f",b);
printf("hello world %c",c);
printf("The size taken by int is %d\n",sizeof(int));
printf("The size taken by int is %d\n",sizeof(unsigned short));
printf("The size taken by int is %d\n",sizeof(float));
printf("The size taken by int is %d\n",sizeof(double));
printf("The size taken by int is %d\n",sizeof(long double));

printf("\n******Rules for creating variables *****");
int harryName;//This is variable declaration
harryName = 76;//This is initialiazation
char five = '5';//This is declaration and initialiation

const int i = 9;
// i = 10; (throws an error )
harryName = 98;







return 0;
}