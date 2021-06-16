//Given an array and an integer k, find the maximum for each and every contiguous subarray of size k
#include<iostream>
using namespace std;
void maxarray(int arr[],int k)
{
    int l=0;
    int r=l+k-1;
     
    while(r<7)
    {
        int max=arr[l];
        for(int i=l+1;i<=r;i++)
        {
            if(arr[i]>arr[l])
            max=arr[i];
        }
        cout<<max<<" ";
        l++;
        r++;
    }
}
int main()
{
    int arr[]={7,8,4,6,5,2,4};
    int k=3;
    int size=7;
    maxarray(arr,k);
}