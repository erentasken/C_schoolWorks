/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int findDifferent(int num1, int num2, int num3){
    if(num1 == num2 && num1 == num3 && num2 == num3){
        return 0;
    }
    else if( num1 != num2 && num1 != num3 && num2 != num3){
        return -1;
    }
    else if( num1 == num2 && num2 != num3 ){
        return num3;
    }
    else if( num1 != num2 && num2 == num3 ){
        return num1;
    }
    else if( num1 == num3 && num2 != num3 ){
        return num2;
    }
    
}
int main()
{
    int num1,num2,num3, tester;
    scanf(" %d %d %d", &num1, &num2, &num3);
    tester = findDifferent(num1,num2,num3);
    if( num1 != num2 && num1 != num3 && num2 != num3 ){
        printf("All numbers are different");
    }
    else if(num1 == num2 && num1 == num3 && num2 == num3){
        printf("All number are same");
    }
    else{
        printf("%d", tester);
    }
    
    return 0;
}
