/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int crimeCalculator(int price_ceiling){
    int crime_coeff = 0, equilibrium_value = 20000, demand, price, i;
    for(i=0; i<12;i++){
        demand = 0;
        printf("Please enter the demand:");
        scanf("%d", &demand);
        price = equilibrium_value/demand;
        if(price<20){
            printf("Price cannot be smaller than 20, fixed to 20.\n");
            price = 20;
        }
        if( price<price_ceiling ){
            crime_coeff--;
            printf("crime_coeff decreased: %d\n", crime_coeff);
        }
        else if( price>price_ceiling ){
            crime_coeff++;
            printf("crime_coeff increased: %d\n", crime_coeff);
        }
    }
    return crime_coeff;
}
int main()
{
    int option, economic_accessibility = 10, crime_coefficient = 10;
    while(option!=4){
        printf("Please select an option (economy: %d, crime: %d) :\n", economic_accessibility, crime_coefficient);
        printf("[1] Set price ceiling for a year.\n");
        printf("[2] Set crime_coefficient.\n");
        printf("[3] Set economic_accessibility.\n");
        printf("[4] Exit.\n");
        scanf("%d", &option);
        if(option==1){
            int price_ceiling, crime;
            printf("Please enter the price ceiling:");
            scanf("%d", &price_ceiling);
            if(price_ceiling<1000){
                economic_accessibility += 3;
            }
            crime = crimeCalculator(price_ceiling);
            crime_coefficient += crime;
            printf("Returning with crime_coeff: %d\n", crime);
        }
        else if(option==2){
            printf("Please enter the crime_coefficient manually:");
            scanf("%d", &crime_coefficient);
        }
        else if(option==3){
            printf("Please enter the economic accessibility manually:");
            scanf("%d", &economic_accessibility);
        }
    }
    return 0;
}
