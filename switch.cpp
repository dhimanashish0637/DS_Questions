#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>s;
	int n,i,a,m,x;
	cout<<"enter size"<<endl;
	cin>>n;
	cout<<"push to 1"<<endl<<"pop to 2"<<endl<<"max element"<<endl;

	while(n--)
	{
			cin>>m;
	switch(m)	
	{
		case 1:
			{
			cin>>a;
			s.push(a);
			while(!s.empty())
            {
           	cout<<s.top()<<endl;
         	s.pop();
            }
            
			}break;
	case 2:
				{
				
						cout<<s.top();
						s.pop();
					}
					break;
				      
				
				
			
		}
		}
		}	



