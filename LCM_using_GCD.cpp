//a*b=LCM*GCD
#include<iostream>
using namespace std;
int GCD(int a,int b)
{
    if(b==0)
    return a;
    return GCD(b,a%b);
    
}

int main()
{
    int a,b;
    cout<<"Enter numbers :";
    cin>>a>>b;
    cout<<"LCM of "<<a<<" and "<<b<<" is  :"<<(a*b)/GCD(a,b);
}