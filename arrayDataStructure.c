
#include<stdio.h>
 
 //In array search for item and remove that item from array
 //Make sure all array elements are contiguous only
 #define SIZE 10
 
 int size = 0;
 
int search(int arr[], int size, int item){
	
	int i;
	int position = -1;
	for(i = 0 ; i < size; i++){
		if(arr[i] == item)
			position = i;
	}
	return position;
}
  
void removeItem(int arr[], int position){
	int i = 0;
	for(i=position; i< size-1; i++){
		arr[i] = arr[i +1 ];
	}
	size = size -1 ;
}

//Do not edit the below code
int main()
{
	int i;
	
	int arr[SIZE] = {1,2,3,5,6};
	size = 5;
	
	int position = search(arr, size, 3);
	printf("Number 3 is at location = %d \n", position);
	
	removeItem(arr, position);
	for(i= 0 ; i< size; i++)
		printf("%d \n", arr[i]);

    return 0;
}

