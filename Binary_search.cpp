//Binary Search Tree
#include<iostream>
using namespace std;
int binary_search(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key){
            start=mid+1;
        }
        else
        end=mid-1;
        
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the element to Search: ";
    cin>>key;
    int index=binary_search(arr,size,key);
    if(index!=-1)
    cout<<"Number is present at position : "<<index+1;
    else
    cout<<"Number is not present ";
}