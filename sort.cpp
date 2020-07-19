#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
 int i,n,arr[100];
  cin>>n;
  for(i=0;i<n;i++)
  {
  	cin>>arr[i];
  }
   int a = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
	 for(i=0;i<n;i++)
	  { cout<<arr[i]<<" "; }
	}
