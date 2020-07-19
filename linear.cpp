#include<iostream>
using namespace std;
int main()
{
	int a,arr[100],num,flag=0;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	cin>>a;
	for(int i=0;i<num;i++)
	{
		if(arr[i]==a)
		{
			cout<<"Element Found";
			flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"Element Doesn't exist";
	}
}
