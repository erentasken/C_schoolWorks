/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void sort(int arr[], int size ){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                temp = arr[j];
                arr[j] =arr[i];
                arr[i] = temp;
            }
        }
    }
}
void rearrangeArray(int arr[], int size){
    
}
int main()
{
    int size;
    int arr[] = {5,8,1,4,2,9,3,7,6};
    size = sizeof(arr)/sizeof(int);
    int reverseArr[size];
    sort(arr,size);
    int reverse = size;
    for(int i=0;i<size;i++){
        reverseArr[reverse-1] = arr[i];
        reverse--;
    }
    for(int j=0;j<size;j++){
        printf("%d ",reverseArr[j]);
    }
    return 0;
}

