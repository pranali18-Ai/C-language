#include<stdio.h>
int main()
{
    int n1, n2, n3 ;
    printf("n1 = ");
    scanf("%d", &n1);
    printf("n2 = ");
    scanf("%d", &n2);
    printf("n3 = ");
    scanf("%d", &n3);

    if(n1>n2 && n1>n3){
        if(n2>n3){
            printf("second largest is n2");
        }
        else{
            printf("second largest is n3");
        }
    }
    else if(n2>n3 && n2>n1){
        if(n3>n1){
            printf("second largest is n3");
        }
        else{
            printf("second largest is n1");
        }
    }
    else{
        printf("second largest is n2");
    }
    return 0;
}