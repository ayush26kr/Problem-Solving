#include<iostream>
#include<algorithm>
using namespace std;
int toughCompetitor(int *arr, int n) {
        // code here
        sort(arr,arr+n);
        int dif=INT_MAX;
        for(int i=0;i<n-1;i++)
        if(arr[i+1]-arr[i]<dif)
        dif=arr[i+1]-arr[i];
        
        return dif;
    }
int main()
{
    int arr[]={9, 4, 12, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<toughCompetitor(arr,n);
}