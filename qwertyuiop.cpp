#include<iostream>

#include<stack>
using namespace std;
int main()
{
	stack<int>s;
	int i,n,a,choice;
	cout<<"enter size";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		s.push(a);
	}
	cout<<"ENTER CHOICE \nPress 1 for Insertion \nPress 2 for Deletion\nPress 3 for Display\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
cin>>a;
			s.push(a);
			cout<<s.top()<<" element has been pushed";
			n++;
			break;
		case 2:
			cout<<s.top()<<" element has been popped";
			s.pop();
			n--;
			break;
		case 3:
			for(int i=0;i<n;i++)
			{
				cout<<s.top()<<endl;
				s.pop();
			}
			break;
	}
	//getch();
}
