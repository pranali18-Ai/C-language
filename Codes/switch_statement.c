//check odd even by using switch statement
#include <stdio.h>
int main()
{
    int num;
    printf("Number:");
    scanf("%d", &num);
    switch(num%2){
        case 0: 
        printf("Even");
        break;
        default: 
        printf("Odd");
        break;
    }
    return 0;
}


















