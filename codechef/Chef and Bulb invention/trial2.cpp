#include <iostream>
using namespace std;


int main() 
{
	// your code goes here
	int q;
	cin>>q;
	while(q--)
	{
	    int n,p,k;
	    cin>>n>>p>>k;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(p<k)
            {
                cout<<2*p+1;
                break;
            }
	        else        //p>=k
	        {
	            p%=k;
	            cout<<2*p+2;
                break;
	        }
	    }
	}
	return 0;
}
