//Q2: Converting height : Feet to Inch
/*#include <stdio.h>
int main()  
{
    float height, inch;
    printf("Height in feet:");
    scanf("%f",&height);
    inch = height*12;
    printf("%f",inch);
    return 0;
}
*/
//Q2: Converting height : Inch to Feet
#include <stdio.h>
int main()  
{
    float height, feet;
    printf("Height in inch:");
    scanf("%f",&height);
    feet = height/12;
    printf("%f",feet);
    return 0;
}