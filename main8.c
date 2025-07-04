//Array in C
#include <stdio.h>
int main(){
    int arr[10]={0,10,200,30,40,500,600,700,800,90};

for (int i = 0; i < 10; i++)
{
    printf("Enter the values for index %d \n",i);
    scanf("%d",&arr[i]);

}
for (int i = 0; i < 10; i++)
{
    printf("The value for index %d is %d\n",i,arr[i]);
    
}

    
    
    
    
    
    
    return 0;
}