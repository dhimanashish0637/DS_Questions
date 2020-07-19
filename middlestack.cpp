#include<iostream>
#include<stack>
using namespace std;
 void deleteMid(stack<int> &st, int n,int temp=0)
{
 if (st.empty() || temp == n)
     return;
   int x = st.top();
  st.pop();
    deleteMid(st, n, temp+1);
 if (temp != n/2)
       st.push(x);
}
 
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    deleteMid(st, st.size());
 while (!st.empty())
    {
     int p=st.top();
        st.pop();
        cout << p << " ";
    }
    return 0;
}
