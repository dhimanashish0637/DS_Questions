#include<iostream>
#include<stack>
using namespace std;
	
class Stack
{
	int *arr,size,top;
	public:
	Stack(int n)
	{
		top=-1;
		size = n;
		arr=new int(size);
	}
	void push(int x)
	{
		int c=arr[++top]=x;
		cout<<c<<endl;
	}
	void pop()
	{
		int d=arr[top--];
		cout<<d<<endl;
	}
	void display()
	{
		
/*	while(!arr.empty())
			cout<<arr[i]<<endl;
*/		
	}
};
int main()
{
	int  n,ch,a;
	cin>>n;
	Stack s(n);
	while(n--)
	{
		cin>>ch;
		switch(ch)
		{
			case 1:
			cin>>a;
			s.push(a);
			break;
			case 2:
			s.pop();
			break;
			case 3:
			s.display();
			break;	
		}
	}
}

