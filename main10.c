// String in C
#include <stdio.h>
#include <string.h>
int main(){
    char name[3]={'m','y','\0'};
    char str1[65],str2[98],str3[56];
    strcpy(str1,"DHarry");
    strcpy(str2,"HDeepak");
    printf("%s\n%s\n",str1,str2);
    strcat(str1,str2);
    printf("%d",strcmp(str1,str2));
    return 0;
}