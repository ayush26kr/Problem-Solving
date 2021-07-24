#include<iostream>
using namespace std;

int cal_Sqroot(int num,int decimal_places)
{
    int start=0;
    int end=num;
    float ans;
    int mid;
    
    while(start<=end){
    mid=(start+end)/2;
    int sq=mid*mid;
    if(sq==num)
    {
        ans=mid;
        break;
    }
    if(sq<num){
    start=mid+1;
    ans=mid;
    }
    else    //if(sq>num)
    end=mid-1;

    
    }
    
    //to calculate fractional part
    float increement=0.1;
    for(int i=0;i<decimal_places;i++)
    {
        while(ans*ans<=num)
        {
            ans+=increement;
        }
        ans=ans-increement;
        increement=increement/10;
    }
    return ans;
}
int main()
{
    int num,dec;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Decimal places: ";
    cin>>dec;
    cout<<"Square root is : ";
    cout<<cal_Sqroot(num,dec);
}