#include<iostream>
using namespace std;
int main()
{
	int num,arr[100],a,i,x,y,z;
	cin>>num;
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	x=arr[0];
	for(i=0;i<num;i++)
	{
	if(x>arr[i])
	{
		x=arr[i];
		y=i;
	}
    }
    for(i=0;i<num;i++)
    {
    	if(x==arr[i])
    	{
    		a=i;
		}
	}
    cout<<"Smallest:"<<x<<endl;
	arr[y]=99999;
	arr[a]=99999;
    z=arr[0];
    for(i=0;i<num;i++)
    {
    	if(z>arr[i])
    	{
    		z=arr[i];
		}
	}
	cout<<"Second Smallest:"<<z;
	return 0;
}
