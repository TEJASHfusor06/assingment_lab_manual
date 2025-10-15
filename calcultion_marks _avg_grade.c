#include <stdio.h>
int main()
{
    //taking input
    int a,b,c ;   
    goto input; 

    input:
    {
        printf("Marks of sub1:");
        scanf("%d",&a);
        printf("Marks of sub2:");
        scanf("%d",&b);
        printf("Marks of sub3:");
        scanf("%d",&c);
    }

    //validating input
    if(a>100 ||b>100 ||c>100)
    {
        printf("invalid input,Try again\n");
        goto input;
    }   


    //calculations
    printf("Total: %i",a+b+c);
    printf("\nAverage: %.2f\n",(a+b+c)/3.0);
    float avg=(a+b+c)/3.0;
    if(avg>=75)
        printf("Grade: A");

    else if(avg<75 && avg>=50)
        printf("Grade: B");
    
    else if(avg<750 && avg>=25)
        printf("Grade: C");

    else
        printf("Grade: F");
    return 0;
}
