#include<iostream>
using namespace std;
void swap(int *a,int *b);

int seperate_even_odd(int arr[],int size,int k)
{
    int left=0;
    int right=size-1;
    while(left<right)
    {
        while(arr[left]%2==1 && left<right)
        left++;
        while(arr[right]%2==0 && left<right)
        right--;
        if(left<right)
        {
            swap(&arr[left],&arr[right]);
            left++;
            right--;
        }
    }
    for(int j=1;j<=size;j++)
    return arr[k];

}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=1;i<=n;i++)
    arr[i]=i;
    
    cout<<"array is: "<<endl;
     for(int i=1;i<=n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    cout<<"After shifting odd numbers to left and even numbers to right ";
    cout<<"Number at pos "<<k<<" is ";
    cout<<seperate_even_odd(arr,n,k);
}