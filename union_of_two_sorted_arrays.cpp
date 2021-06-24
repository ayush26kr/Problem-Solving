//Union of two sorted arrays
#include<iostream>
using namespace std;
void findunion(int arr1[],int arr2[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
        else if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    while (i<m)
    {
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<n)
    {
        cout<<arr2[j]<<" ";
        j++;
    }
    

}
int main(){
    int arr1[]={1,2,3,4,5,6,7};
    int arr2[]={5,6,7,8};
    int m=7;
    int n=4;
    cout<<"Union of the two arrays is : ";
    findunion(arr1,arr2,m,n);
}