
#include<iostream>
using namespace std;
int palindrome(int);
int y=0;
int main()
{

int num,res;
cout<<"Enter number:- ";
cin>>num;
res=palindrome(num);
if(num==res)
 {
  cout<<"Entered number is palindrome";
 }else{
  cout<<"Enter number is not palindrome";
 }

}
int palindrome(int num)
 {
  int x;
  if(num!=0)
  {
    x=num%10;
    y=y*10+x;
    palindrome(num/10);
  }
   return y;
 }
