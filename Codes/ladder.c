//Calculate the scholarships get by students on the basis of their marks 

#include <stdio.h>
int main()
{
    int marks;
    printf("Marks: ");
    scanf("%d",&marks);

    // if marks equals to 100 then student get 100% scholarship
    if(marks == 100){
        printf("You have get 100 percent scholarships\n");
    }
    // else if marks are greater than equal to 90 the 90% scholarship
    else if(marks >= 90 && marks<100){
        printf("You have get 90 percent scholarship\n");
    }
    // marks greater than 80 and less than 90 then 80 percent scholarship
    else if(marks >=80 && marks< 90){
        printf("You have get 80 percent scholarship\n");
    } 
    else if (marks >= 30 && marks<80){
        printf ("you have get 50 percent scholarship\n");
    }
    // other students will get the 50% scholarship 
    else{
        printf("You are not eligible for the scholarships\n");
    }
    printf("\nCongratulation all the students who get the scholarship!!\n");
    return 0;

}