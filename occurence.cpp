#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,num,count=0,ar[1000]={0};
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<num;i++)
	{
	ar[arr[i]]++;
    }
	for(i=0;i<1000;i++)
	{
		if(ar[i]%2!=0)
		{
			cout<<i<<" occurs "<<ar[i]<<endl;
		}
	}
}
