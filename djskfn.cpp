#include <iostream>
using namespace std;
 
int main()
{
	int arr[10], FreqArr[10], i, j, Count, Size;
	
	cout<<"enter size"<<endl;
	cin>>Size;
		for (i = 0; i < Size; i++)
	{
          cin>>arr[i];
	    	FreqArr[i] = -1;
	    	cout<<"F"<<FreqArr[i]<<endl;
   	}     
 
	for (i = 0; i < Size; i++)
	{
		Count = 1;
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
    			cout<<"count"<<Count<<endl;
    			FreqArr[j] = 0;
    			cout<<"freq"<<FreqArr[j]<<endl;
    		}
    	}
    	if(FreqArr[i] != 0)
    	{
    		FreqArr[i] = Count;
    		cout<<"FreqA"<<FreqArr[i]<<endl;
		}
	}

	cout<<"out"<<endl;
 	for (i = 0; i < Size; i++)
  	{
  		if(FreqArr[i] != 0)
  		{
  		
        cout<< arr[i]<<FreqArr[i]<<endl;
		}		
  	}	     
 	return 0;
}

