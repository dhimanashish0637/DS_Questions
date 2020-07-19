#include<iostream>
#include<stack>
using namespace std;
void calculateSpan(int price[],int n,int s[])
{
	stack<int>st;
	st.push(0);
	s[0]=1;
	for(int i=1;i<n;i++)
	{
		while(!st.empty() && price[st.top()]<=price[i])
		{
		
			st.pop();
	    }
	s[i]=(st.empty())? (i+1):(i-st.top());
	st.push(i);
	}
	
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
     cout<<arr[i]<<" ";
}
int main()
{
	int price[]={100,80,60,70,60,75,85};
	int n=sizeof(price)/sizeof(price[0]);
	//cout<<n<<endl;

	 int S[n];
	calculateSpan(price, n, S);
    printArray(S, n);
}
