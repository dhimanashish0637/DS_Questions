#include<iostream>
#define MAX 100
using namespace std;
int stk[MAX];
int top=-1;
void reverse(int str[])
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
       stk[++top]=str[i];    
    }
    for(int i=0;i<n;i++)
    {
        cout<<stk[top--]<<" ";
    }
    
}
int main()
{
int str[MAX];
reverse(str);
return 0;
}
