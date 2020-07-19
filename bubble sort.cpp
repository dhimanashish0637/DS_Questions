#include<iostream>
using namespace std;
void bubble(int arr[],int num)
{
	int i,j,temp,flag=0;
	for(i=0;i<num-1;i++)
	{
	for(j=0;j<num-1;j++)
	{
	 if(arr[j]>arr[j+1])
	 {
	   temp=arr[j];
       arr[j]=arr[j+1];
	   arr[j+1]=temp;
	   flag=1;
	 }
	}
	if(flag==0)
	{
		break;
	}
	}
	for(i=0;i<num;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[1000],i,j,num,temp;
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	bubble(arr,num);
}
