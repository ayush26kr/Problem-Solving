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
        int ans=0;

        int a=p%k;
        a--;

        int s=(((n-1)/k)*k);
        s=n-1-s;
        if(a>s)
        {
            ans+=(s+1)*((n-1)/k+1)+(a-s)*((n-1)/k);
        }
        else{
            ans+=((n-1)/k+1)*(a+1);
        }
        for(int i=a+1;i<=n-1;i+=k)
        {
            ans++;
            if(i==p)
            {
                cout<<ans<<endl;
                break;
            }
        }
    }
}
