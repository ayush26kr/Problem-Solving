#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int>vec;  
    int n,q,inp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);
    } 
    cin>>q;
    vector<int>::iterator lower;
    while(q--)
    {
        cin>>inp;
        lower=lower_bound(vec.begin(),vec.end(),inp);
        if(vec[lower-vec.begin()]==inp)
        cout<<"Yes "<<(lower-vec.begin()+1)<<endl;
        else {
        cout<<"No "<<(lower-vec.begin()+1)<<endl;
        }
        
        
    }
    return 0;
    
}
