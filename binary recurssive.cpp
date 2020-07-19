#include<iostream>
using namespace std;
int binary(int arr[1000],int a,int b,int x)
{
	int m;
	if(b>=a)
	{
	 m=a+b/2;
	 if(arr[m]==x)
	 {
	cout<<"Element found";
	 }
	 else
	 {
	 	cout<<"Element not found";
	 }
	  if(arr[m]>x)
	 {
	 binary(arr,a,m-1,x);
	 }	
	 else
	 {
	 	binary(arr,m+1,b,x);
	 }
	}
	return 0;
}
int main()
{
	int arr[100],i,num,x;
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	cin>>x;
	binary(arr,0,num-1,x);
}
