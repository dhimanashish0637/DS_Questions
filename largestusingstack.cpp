#include<iostream>
#include<stack>
using namespace std;
void largest(int arr[],int n)
{int i;
	stack<int>s;
	s.push(arr[0]);
	for(i=1;i<n;i++)  
	{
		while(!s.empty() && s.top()<arr[i])
		{
			cout<<s.top()<<"  "<<arr[i]<<endl;
			s.pop();
		}
		s.push(arr[i]);
	}
	while(!s.empty())
	{
		cout<<s.top()<<"  "<<"-1";
		s.pop();
	}

	
}
int main()
{
	stack<int>s;
	int n,a,arr[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	largest(arr,n);
	return 0;
}
