
// Maximum of two numbers
#include <stdio.h>
int main()
{
    int x = 1 , y = 2 ;
    int max;
    max = x>y ? x:y;
    printf("%d\n",max);
    return 0;

}

//  Maximum of two numbers
/*
#include <stdio.h>
int main()
{
    int x = 1, y = 2, z = 4;
    int max;
    max = x>y && x>z ? x:y>x && y>z ? y:z ;
    printf("%d\n",max);
    return 0;

}
 */
/*
//  Second Largest Number

#include <stdio.h>

int main()
{
    int n1 = 1, n2 = 2, n3 = 3;
    int secondLargest = n1>n2&&n1>n3 ? n2>n3?n2:n3 : n2>n1&&n2>n3 ? n1>n3?n1:n3 : n1>n2?n1:n2;
    printf("%d", secondLargest);
    return 0;
}
/*

