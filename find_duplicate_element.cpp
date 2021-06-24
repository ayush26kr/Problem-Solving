//finding duplicate element
#include<iostream>
using namespace std;
int findduplicate(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    int arr[]={4,2,6,2,7,9,1,8};
    int size=sizeof(arr)/sizeof(int);
    cout<<"answer is "<<findduplicate(arr,size);
}