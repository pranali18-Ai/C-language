//For AND operator
//if the only first operand evaluate false then next operand will not evaluate
/*#include<stdio.h>
int main()
{
    int x = 1, y = 2; 
    int res = (x>y)&&(y++);
    printf("%d\n",res);
    printf("%d",y);
    return 0;
}
*/

//For OR operator
//if there is an operand evaluated true the rest of the operand will not be evaluated
#include<stdio.h>
int main()
{
    int x = 1, y = 2; 
    int res = (x>y)||(y++);
    printf("%d\n",res);
    printf("%d",y);
    return 0;
    
}