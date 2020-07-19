#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>s;
	int n,i,x,a,j,l=INT_MIN;
	cin>>n;
	while(n--)
	{
		cin>>i;
		switch(i)
		{
			case 1:
				cin>>a;
				s.push(a);
			//	cout<<s.top()<<endl;
				break;
				case 2:
					x=s.top();
					s.pop();
					cout<<x<<endl;
					break;
					case 3:
						j=0;
						while(j<s.size())
						{
							if(l<s.top())
                      {
                          l=s.top();
                      }
                      j++;
                    }
                    cout<<l<<endl;
                }
						}
						
		}
		
	

