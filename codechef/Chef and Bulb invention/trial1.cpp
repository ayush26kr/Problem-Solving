#include <iostream>
using namespace std;

int countDays(int N,int p,int K)
{
    int count=0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(j%K==i)
            {
                count++;
                if(j==p)
                return count;
            }
        }
    }
    return 0;
}

int main() 
{
	// your code goes here
	int q;
	cin>>q;
	while(q--)
	{
	    int n,p,k;
	    cin>>n>>p>>k;
	    
	    cout<<countDays(n,p,k);
	}
}
