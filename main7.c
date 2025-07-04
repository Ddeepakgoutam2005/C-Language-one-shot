// data_type func_name(parameter_type parametername){
//    return value_of_type_data_type;
//    }
#include <stdio.h>
void newprint(char*char1){
    printf("The value is %s\n",char1);
}
int sum(int a,int b){
    return a+b;
}
float average(float a ,float b){
    return (a+b)/2;
}
int main(){
    newprint("Hello World\n");
    printf("%d\n",sum(100,299));
    printf("the average is %f",average(100,299));
}
 //Always a local variable has a higher preference than a global variabe of same name