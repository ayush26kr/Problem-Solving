//Hacker rank bob and alice comparison 
#include<iostream>
#include<vector>
using namespace std;
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice=0,bob=0;
    vector<int>result;
    for(int i=0;i<3;i++)
    {
        if(a[i]> b[i])
        alice++;
        else if (a[i]<b[i])
        bob++;
        else continue;
        
    }
    result.push_back(alice);
    result.push_back(bob);
    return result;

}
int main()
{
    vector<int>bob{3,5,4};
    vector<int>alice{9,1,4};
    compareTriplets(alice,bob);

}