#include<iostream>
using namespace std;

  
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n) 
{ 
   int i, key, j; 
   for (i = 1; i < n; i++) 
   { 
       key = arr[i]; 
       cout<<"key is "<<key<<endl;
       j = i-1; 
       cout<<"j is "<<j<<endl;
       
       
  
       /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
       while (j >= 0 && arr[j] > key) 
       { 
           arr[j+1] = arr[j]; 
           cout<<"arr[j+1]"<<arr[j+1]<<endl;
           
           j = j-1; 
           cout<<"j is in:"<<j<<endl;
       } 
       arr[j+1] = key; 
       cout<<"arr[j+1] out"<<arr[j+1]<<endl;
   } 
} 
  
// A utility function to print an array of size n 
void printArray(int arr[], int n) 
{ 
   int i; 
   for (i=0; i < n; i++) 
       cout<<arr[i]<<" "; 
   
} 
  
  
  
/* Driver program to test insertion sort */
int main() 
{ 
    int arr[] = {12, 11, 13, 5, 6}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  for(int i=0;i<n;i++)
  {
  	cout<<arr[i]<<" ";
	    }
	    cout<<endl;
    insertionSort(arr, n); 
    printArray(arr, n); 
  
    return 0; 
} 
