/*Name:Dennis Mutuku kaleli 
Reg no: CT100/G/30713/26
Date:21/09/2026
Basic volume and surface area calculator*/

#include<stdio.h>
#include<math.h>
int main()
{   
    float numberOne;
    float numberTwo;
    double pi = 3.142;
    
    printf("Enter radius:\t");
    scanf("%f",&numberOne);
    
    printf("Enter height:\t");
    scanf("%f",&numberTwo);
    
    printf("\n");
    
    printf("The volume of your cylinder is:%.4f\n",pi*pow(numberOne,2)*numberTwo);
    
    
    
    printf("The surfaceArea of your cylinder is:%.4f",2*pi*pow(numberOne,2)+2*pi*numberOne*numberTwo);

    return 0 ;
}

    