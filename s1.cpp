#include<iostream>
#include<stack>
using namespace std;
class A
{stack<int>s1;
		stack<int>s2;
	int *arr,s;
	public:
		
	A(int size)
	{
		s=size;
		arr=new int(s);
	}
	void enque(int b)
	{
		
			s1.push(b);
				for(int i=0;i<s;i++)
	{
	int d=s1.top();
	cout<<d<<" ";
	s1.pop();
	}
	}

};
int main()
{
	int n,ch,b;
	cin>>n;
	A a(n);
	
//	cout<<"enque 1 dequeue 2 display 3");
	while(1)
	{ 
		cin>>ch;
		switch(ch)
		{
			case 1:
				cin>>b;
		a.enque(b);
		break;
		/*case 2:
			a.deque()
			break;
				case3:
					a.display();
					break;*/
		}
	}
	 
}
