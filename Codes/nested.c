// according to the age check whether is the person eligible for work or not

#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    
    if(age < 18){
        if(age >=18 && age <=60){
            if(age>60){
                printf("Not eligible");
            }
        }
        else{
            printf("Eligible");
        }
        }
        else{
            printf(" Not eligible");
        }
        return 0;
        
        }
    
    

    
    
    
    
    
    
    
    
    
    
    


