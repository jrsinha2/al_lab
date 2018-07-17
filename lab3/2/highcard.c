#include<limits.h>
#include<stdio.h>
#include"highcard.h"
int highcard(char* arr)
{	int i,j;
	//char key1,key2;
	
	 int min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < 9; i+=2)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        
        for (j = i+2; j < 10; j+=2)
          if (lookup(arr[j]) < lookup(arr[min_idx]))
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
        swap(&arr[min_idx+1],&arr[i+1]);
    }
    for (i =10; i < 19; i+=2)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        
        for (j = i+2; j < 20; j+=2)
          if (lookup(arr[j]) < lookup(arr[min_idx]))
            min_idx = j;
 
        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
        swap(&arr[min_idx+1],&arr[i+1]);
    }
	for(i=0;i<19;i+=2)
	{	printf("%c%c ",arr[i],arr[i+1]);
	}
	printf("\n");
	
	
	i=8,j=18;
	while(i>=0 && j>=10 && lookup(arr[i])==lookup(arr[j]))
	{	i-=2;
		j-=2;
	}
	
	if(i>=0 && j>=10){
	//printf("\n%c %c\n",arr[i],arr[j]);
	if( lookup(arr[i])> lookup(arr[j])) 
		return 1;
	else
	return 2;
	}
	else
		return 0;
}
