// C++ program for implementation of Bubble sort 
#include <bits/stdc++.h> 
using namespace std; 

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 

// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
	int i, j; 
	for (i = 0; i < n-1; i++)	 
	
	// Last i elements are already in place 
	for (j = 0; j < n-i-1; j++) 
		if (arr[j] > arr[j+1]) 
			swap(&arr[j], &arr[j+1]); 
} 

/* Function to print an array */
void printArray(int arr[], int size) 
{ 
	int i; 
	for (i = 0; i < size; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

// Driver code 
int main() 
{    
	int arr[] = {4,2,0,3,4,0,4,1,2,1,3}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	bubbleSort(arr, n); 
    cout<<"array before sorting : [4,2,0,3,4,0,4,1,2,1,3] \n"; 
	cout<<"array after sorting : "; 
	printArray(arr, n); 
	return 0; 
} 

// This code is contributed by rathbhupendra 

