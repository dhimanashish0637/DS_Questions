#include<iostream>
using namespace std;

int main() {
	int s,s1,a,n;
    cin>>n;
    for(int i=0;i<3;i++)
    {
	
    a=n%10;
    if(a%2==0)
    {
        s=s+a;
    }
    else if(a%2!=0)
    {
        s1=s1+a;
 //       cout<<s1;
    }
    n=n/10;
}cout<<s<<" "<<s1;
	
}
