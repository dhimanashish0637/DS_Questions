#include<iostream>
using namespace std;
int main()
{
    int arr[1000],num,sum=0;
    cin>>num;
    for(int i=0;i<num;i++)
    {
    	cin>>arr[i];
	}
	for(int i=0;i<num;i++)
	{
		sum=sum+arr[i];
	}
	cout<<sum;
	int x=arr[0];
	int y=arr[0];
	for(int i=0;i<num;i++)
	{
		if(x>arr[i])
		{
			x=arr[i];
		}
	}N
	return 0;
}
