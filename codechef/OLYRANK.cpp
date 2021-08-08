#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int q;
	cin>>q;
	
	while(q--)
	{
	    int c1=0,c2=0;
	    int medals[10];
	    for(int i=0;i<6;i++)
	    {
	        cin>>medals[i];
	    }
	    
	    
	    for(int i=0;i<6;i++)
	    {
	        if(i<3 && i>=0)
	        c1+=medals[i];
	        else if(i>=3)
	        c2+=medals[i];
	    }
	    if(c1>c2)
	    cout<<"1"<<endl;
	    else
	    cout<<"2"<<endl;
	    
	    
	}
	return 0;
}
