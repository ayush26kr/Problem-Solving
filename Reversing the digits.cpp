//reversing the number
#include<iostream.h>
using namespace std;
int reverse(int);
int main()
{
	int x;
	cout<<"Enter a number: ";
	cin>>x;
	cout<<"Reverse of  "<<x<<" is  "<<reverse(x);
}
int reverse(int x)
{
	int rev=0;
	while(x!=0)
	{
		int pop=x%10;
		x=x/10;
		rev=rev*10+pop;
	}
	return rev;
}


