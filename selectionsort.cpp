#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
	int min,i,j;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		
int temp=arr[min];
arr[min]=arr[i];
arr[i]=temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	selectionsort(arr,n);
}
