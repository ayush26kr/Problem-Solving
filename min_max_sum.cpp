#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void miniMaxSum(vector<int> arr) {
   long int sum=0;
   for(int i=0;i<5;i++)
   sum+=arr[i];
   
  sort(arr.begin(),arr.end());
  
    cout<<sum-arr[4]<<" ";
    cout<<sum-arr[0];
}
int main()
{
    vector<int>arr;
    for(int i=0;i<5;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    miniMaxSum(arr);

}