#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>s;
	int n,i,a;
	cout<<"enter size"<<endl;
	cin>>n;
	cout<<"enter element"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a;
		s.push(a);
	}
		int b=s.top();
		cout<<b;
while(!s.empty())
{

	if(b<s.top()){
		b=s.top();
	}
	s.pop();
	cout<<b;

}
}
