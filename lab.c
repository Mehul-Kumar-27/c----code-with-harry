// #include <stdio.h>
// int main() {

//     int basic_salary, house_allowance, dearness_allownace, gross_salary;

//     printf("Enter basic_salary: ");
    
//     scanf("%d", &basic_salary);
    
//     printf("Enter house_allowance: ");
     
//     scanf("%d", &house_allowance);
     
//     printf("Enter dearness_allownace : ");
      
//     scanf("%d", &dearness_allownace);
     
     

//     // calculating the gross_salary
//     gross_salary = basic_salary + house_allowance + dearness_allownace;

//      // displaying gross_salary
//     printf("gross_salary is:  %d", gross_salary);
//     return 0;}
#include <stdio.h>


int main()
{
    int a = 1;
    int integer;
    int odd_number= 0; 
    int  even_number = 0 ;
    
    do
    {
        printf("Enter the integer: ");
        scanf("%d",&integer);

        if (integer == -1) break ; 
        {
            
        }
        

        if (integer % 2 == 0)
        {
            odd_number++;
        }

        if (integer % 2 != 0 )
        {
            odd_number++;
        }
        
        a++;
        
    } while (integer !=-1);
    

    printf("The number of integers entered by the user is: %d \n\n" , --a );
    printf("The number of even numbers entered by the user is: %d \n\n" , even_number );
    printf("The number of odd numbers entered by the user is: %d \n\n" , odd_number );
    return 0;
}
