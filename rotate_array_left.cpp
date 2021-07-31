#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//solution:
 //reverse the entire array
 //reverse first n-d elements
 //reverse last d elements
 void reverse(vector<int>&arr,int start,int end)
 {
     while(start<end)
     {
         int temp=arr[start];
         arr[start]=arr[end];
         arr[end]=temp;
         start++;
         end--;
     }
 }

vector<int> rotateLeft(int d, vector<int> arr) {
    
    int n=arr.size();
    d=d%arr.size();
    
    reverse(arr,0,n-1);
    reverse(arr,0,n-d-1);
    reverse(arr,n-d,n-1);
    
    return arr;
   
}
int main()
{
    int n;
    cout<<"enter size: ";
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int d;
    cout<<"enter numbers to rotate with: ";
    cin>>d;
    vector<int>res=rotateLeft(d,arr);
    cout<<"\nArray after rotating by "<<d<<" is :";
    for(auto i:res)
    cout<<i<<" ";

}