//Maximum Product subarray
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxProduct(vector<int>&nums,int n)
{
    int local_max=nums[0];
    int global_max=nums[0];
    int local_min=nums[0];
    for(int i=1;i<n;i++)
    {
        int temp=local_max;
        local_max=max({nums[i],nums[i]*local_max,nums[i]*local_min});
        local_min=min({nums[i],nums[i]*local_min,nums[i]*temp});
        global_max=max(global_max,local_max);
    }
    return global_max;
}
int main()
{
    int n;
    vector<int>nums;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {int temp;
        cout<<"\nEnter element "<<i+1<<"  -> ";
        cin>>temp;
        nums.push_back(temp);
    }
    cout<<"Elements are: ";
    for(int c:nums)
    cout<<c<<" ";
    cout<<endl<<endl;

    cout<<"Maximum Product Subarray is : ";
    cout<<maxProduct(nums,n);


}