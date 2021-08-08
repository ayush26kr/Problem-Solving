#include <iostream>
using namespace std;

int countUnique(int prob[])
{
    int res = 1;
    for (int i = 1; i < 4; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (prob[i] == prob[j])
                break;
 
        // If not printed earlier, then print it
        if (i == j)
            res++;
    }
    if(res<=1)
    res=0;
    else if(res==2)
    {
        int c=1;
        int a=prob[0];
        for(int i=1;i<4;i++)
        {
            if(prob[i]==a)
            c++;
        }
        if(c==2)
        res+=2;
        else 
        res=2;
        
    }
    else if(res==3)
    res+=1;
    
    return res;
}
int main() {
	// your code goes here
	int q;
	cin>>q;
	while(q--)
	{
	    int prob[4];
	    for(int i=0;i<4;i++)  //input
	    cin>>prob[i];
	    
	    //count unique elements in prob
	    int n=countUnique(prob);
	    cout<<n/2<<endl;
	}
	return 0;
}
