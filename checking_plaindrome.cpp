//To check if a number is palindrome
#include<iostream>
using namespace std;
int main()
{
    int num,orgnum,rem,revnum;
    cout<<"Enter a number: ";
    cin>>num;
    orgnum=num;
    while(num!=0){
        rem=num%10;
        revnum=revnum*10+rem;
        num=num/10;
    }
    if(revnum==orgnum)
    cout<<"It is a plaindrome ";
    else
    cout<<"It is not a palindrome ";
    return 0;

}