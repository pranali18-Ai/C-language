#include <stdio.h>
int main()
{
    //temp is for swapping the values.
    int a, b ;
    printf("Put the value of a =");
    scanf("%d\n",&a);
    printf("Put the value of b =");
    scanf("%d\n", &b);

    // put the value of a in to temp
    a =b;
 

    // put the value of b into a 
    b =a;

    printf("\n After swapping , a = %d\n", a);
    printf("\n After swapping, b = %d\n", b);
    
    return 0;
}
