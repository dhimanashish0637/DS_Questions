#include <iostream>
using namespace std;
int main()
{
   int a=5;
   int *p;
   *p=&a;
   cout<<*p;
    
   return 0; 
}
