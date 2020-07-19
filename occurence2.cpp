#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,j,count=0,num;
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			if(arr[j]==arr[i])
			{
				count++;
			}
		}
	}
	if(count%2!=0)
	{
		cout<<count;
	}
	
}
