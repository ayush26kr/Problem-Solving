#include <bits/stdc++.h> 
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

float find_median(int v[],int n)
{
    if(n%2==1)
    return v[(n-1)/2];        //median is the middle element

    if(n%2==0){     //median is average of two middle  nums
    float a=v[(n/2)-1];
    float b=v[n/2];
    return (a+b)/2;
    }
}
int main()
{
    int n,i;
    cout<<"Enter size: ";
    cin>>n;
    int v[n];
    cout<<"Enter elements: ";
    for(i=0;i<n;i++)
    cin>>v[i];
    sort(v,v+n);
    cout<<"median is : "<<find_median(v,n);
}