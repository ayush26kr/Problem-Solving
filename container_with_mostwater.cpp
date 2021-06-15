//Container with most water
#include<iostream>
#include<vector>
using namespace std;
 int maxArea(vector<int>&vec)
 {
     int l=0;
     int r=vec.size()-1;
     int max_area=0;
     while(l<r)
     {
         int lh=vec[l];
         int rh=vec[r];
         int length=r-l;
         int breadth=min(lh,rh);
         int curr_area=length*breadth;
         int max_area=max(curr_area,max_area);
    }
    return max_area;
}
int main()
{
    vector<int>vec;
    int n;

    cout<<"Enter numberof elements : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vec.push_back(x);
    }
    cout<<"Given numbers are : ";
    for(auto c:vec)
    cout<<c<<" ";
    cout<<"Maximum area is : "<<maxArea(vec);  //catch by reference
    
    
}
