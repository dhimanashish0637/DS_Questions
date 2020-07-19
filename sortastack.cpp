#include<iostream>
#include<stack>
using namespace std;
stack<int>sortStack(stack<int> &i)
{
    stack<int>t;
   while (!i.empty())
    {
        int tmp = i.top();
        i.pop();
     while (!t.empty() && t.top()>tmp)
        {
            i.push(t.top());
            t.pop();
        }
        t.push(tmp);
    }
  return t;
}
 int main()
{
    stack<int>i;
    int n,a;
    cout<<"Enter size"<<endl;
    cin>>n;
    cout<<"Enter element"<<endl;
    for(int j=0;j<n;j++)
    {
    	cin>>a;
    	i.push(a);
	}
    stack<int>t=sortStack(i);
 
    while (!t.empty())
    {
        cout << t.top()<< " ";
        t.pop();
    }
}
