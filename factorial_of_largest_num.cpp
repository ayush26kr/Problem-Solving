#include<iostream>
#include<vector>
using namespace std;
 vector<int> factorial(int N){
        // code here
        vector<int>result;
        int fact=1;
        while(N!=1)
        {
            fact=fact*N;
            N--;
        }
        result.push_back(fact);
         return result;
    }
int main()
{
    int num;
    cout<<"Enter number to calculate factorial: ";
    cin>>num;
    cout<<"Factorial is : ";
    cout<<factorial(num);
}