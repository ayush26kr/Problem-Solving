#include<iostream>
using namespace std;
bool check(int num)
{
    int temp=num;
    int rev=0;
    while(num>0)
    {
        int pop=num%10;
        num=num/10;
        rev=rev*10+pop;
    }
    if(temp==rev)
    return true;
    else return false;
}
int PalinArray(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        int num=a[i];
        int x=check(num);
        if(x==1)
        continue;
        else return 0;
    }
    return 1;
}
int main()
{
    int t;
    cout<<"Enter test cases: ";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter arr size: ";
        cin>>n;
        int a[n];
        cout<<"Enter elements: ";
        for(int i=0;i<n;i++)
        cin>>a[i];
        cout<<PalinArray(a,n)<<endl;
    }
}