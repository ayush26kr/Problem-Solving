#include<iostream>
using namespace std;
int LCM(int a,int b)
{
    int lcm;
    if(a>b)
    lcm=a;
    else lcm=b;
    while(1)
    {
        if(lcm%a==0 && lcm%b==0)
        {
            return lcm;
        }
        lcm++;
    }
    return 0;
}
int main()
{
    int a,b;
    cout<<"Enter numbers :";
    cin>>a>>b;
    cout<<"LCM of "<<a<<" and "<<b<<" is  :"<<LCM(a,b);
}