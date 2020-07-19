#include<iostream>
#include<stack>
using namespace std;
stack<int> s;
stack<int> s1;
stack<int> s2;
int main()
{
	int size,i,x;
	cin>>size;
	for(i=0;i<size/2;i++)
	{
		cin>>x;
		s.push(x);
	}
	for(i=size/2;i<size;i++)
	{
		cin>>x;
		s1.push(x);
	}
	for(i=0;i<size/2;i++)
	{
		s2.push(s1.top());
		s1.pop();
		s2.push(s.top());
		s.pop();
		
	}
	for(i=0;i<size;i++)
	{
		cout<<s2.top()<<" ";
		s2.pop();
	}
	return 0;
}
