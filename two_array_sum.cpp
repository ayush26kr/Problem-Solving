//Sum of two arrays
#include<iostream>
using namespace std;
int main()
{
    int Array_odd[]={1,3,5,7,9};
    int Array_even[]={2,4,6,8,10};
    int k;
    int result[5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==j){
            result[i]=Array_odd[i]+Array_even[j];
        
            }
        }
    }
    for(k=0;k<5;k++)
    cout<<result[k]<<" ";
}