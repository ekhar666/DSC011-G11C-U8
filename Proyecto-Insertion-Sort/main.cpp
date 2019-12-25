// C++ program for insertion sort 
#include <bits/stdc++.h> 
using namespace std; 

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n) 
{ 
	int i, key, j; 
	for (i = 1; i < n; i++) 
	{ 
		key = arr[i]; 
		j = i - 1; 

		/* Move elements of arr[0..i-1], that are 
		greater than key, to one position ahead 
		of their current position */
		while (j >= 0 && arr[j] > key) 
		{ 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 

// A utility function to print an array of size n 
void printArray(int arr[], int n) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

void randArray(int arr[], int size, int order)  
{  
    int i;  
    for (i = 0; i < size; i++)  
        arr[i] = rand() % order + 1;
     
}  

/* Driver code */
int main() 
{ 
	int order = 10;
    
    
    int arr[order]; 
    int n = sizeof(arr)/sizeof(arr[0]);  
	randArray(arr, n, order);

	insertionSort(arr, n); 
	printArray(arr, n); 

	return 0; 
} 

// This is code is contributed by rathbhupendra 

