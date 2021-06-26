//maximum subarray problem
#include<iostream>
#include<vector>
using namespace std;
vector<int>vec;
int max_sub_array(vector<int>&vec,int size)
{
    int local_max=0;
    int global_max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        local_max=max(vec[i],vec[i]+local_max);
        if(local_max>global_max)
        {
            global_max=local_max;
        }
    }
    return global_max;
}

int main()
{
    int i,size;
    
    cout<<"Enter size of array: ";
    cin>>size;
    for(i=0;i<size;i++)
    {
        int num;
        cin>>num;
        vec.push_back(num);
    }
    cout<<"Given array is : ";
    for(int x:vec)
    cout<<x<<" ";

    cout<<"Maximum subarray sum is : "<<max_sub_array(vec,size); 
     
}