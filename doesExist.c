#include <stdio.h>

	//int larger[]={1,2,2,3,3,3,5,9,9,9,9,10};
	//int smaller[]={5,9,9};
int* doesExist(int *first, int *last, int *smallFirst, int *smallLast){
	int *i;
	int *j;
	int *index;
	int count;
	int smallArrayCount;
	
	for(i = first, j = smallFirst ; i<=last, j<=smallLast; i++){
		if(i == last){
            return NULL;}
		if(*i == *j){
			count ++;
			j++;

            if(count == 3){
                index = i - count + 1;
                return index;
            }
		}
		else{
		    j = smallFirst;
		    
		}
		
	}
	printf("\n");
	// if exist return smallFirst 
	// if it is not return NULL
}
void printArray(int * start, int * end)
{
	
	for(int * c=start;c<=end;c++)
		printf("%d ",*c);
	printf("\n");
}

void printArray2(int * start, int * end, int * startSmall, int * endSmall)
{
	
	for(int * c=start;c<=end;c++)
	{
		if( startSmall == c)
			printf("| ");
		
		printf("%d ",*c);
	
		if( endSmall == c)
			printf("| ");
	}
	printf("\n");
}

int main()
{
	
	int larger[]={1,2,2,3,3,3,5,9,9,9,9,10};
	//int smaller[]={5,9,9};
	int smaller[]={8,9,9};
	
	int * start = doesExist(larger,larger+11,smaller,smaller+2);
	printf("Larger array : ");
	printArray(larger,larger+11);
	printf("Smaller array: ");
	printArray(smaller,smaller+2);
	if(start!=NULL)
	{
		printf("Result       : ");
		printArray2(larger,larger+11,start,start+2);
	}
	else
		printf("smaller array does not exist in the larger one\n");

}
