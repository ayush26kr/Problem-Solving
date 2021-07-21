#include<iostream>
using namespace std;
   bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(A[i]+A[j]+A[k]==X){
                cout<<"Triplet is "<<A[i]<<" "<<A[j]<<" "<<A[k]<<endl;
                return true;}
            }
        }
    }
    return false;
    }
int main()
{
    int arr[]={1,4,45,6,10,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int X=2;
    cout<<find3Numbers(arr,n,X);
}