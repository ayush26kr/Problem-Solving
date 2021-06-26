//Sorting an array of 0's 1's and 2's
#include<bits/stdc++.h>
using namespace std;

void sort_arr(int arr[],int size)
{
    int low=0;
    int high=size-1;
    int mid=0;
    while(mid<=high)
    {
        switch(arr[mid])
        {
            case 0:swap(arr[low++],arr[mid++]);
            break;
            
            case 1:mid++;
            break;

            case 2:swap(arr[mid],arr[high--]);
            break;
        }
    }

}
int main()
{
    int size;
    int arr[100];
    cout<<"enter size: ";
    cin>>size;
    cout<<"Enter elements(0/1/2): ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
   

    sort_arr(arr,size);

    cout<<"Array after sorting is : ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

}