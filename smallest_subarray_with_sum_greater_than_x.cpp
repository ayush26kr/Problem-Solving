#include<iostream>
using namespace std;
int sb(int arr[], int n, int x)
{
    int i=0,j=0;
    int sum=0;
    int min_mum=INT_MAX;
    while(i<=j && j<n)
    {
        while(sum<=x && j<n)
        {
            sum+=arr[j++];
        }
        while(sum>x && i<j)
        {
            min_mum=min(min_mum,j-i);
            sum-=arr[i];
            i++;
        }
    }
    return min_mum;
}
int main()
{
    int arr[]={1, 4, 45, 6, 0, 19};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=51;
    cout<<sb(arr,n,x);
}