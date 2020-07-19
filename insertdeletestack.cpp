#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>s;
	int i,n,a,choice;
	cout<<"enter size"<<endl;
	cin>>n;
    int l=n; 
	while(n--)
	{
	cout<<endl<<"Enter choice"<<endl<<"1 for Insertion"<<endl<<"2 for Deletion "<<endl<<"3 for Display"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			
			cin>>a;
			s.push(a);
			cout<<s.top()<<"element has been pushed";
	        break;
		case 2:
			cout<<s.top()<<"element has been popped";
			s.pop();
	        break;
		case 3:
			cout<<"elements are"<<endl;
	    while(!s.empty())
	    {
	    	cout<<s.top();
	    	s.pop();
		}
		break;
	}
	
}
}
