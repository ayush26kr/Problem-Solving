#include <iostream>
using namespace std;

bool check_num(int num)
{
	if(num>0)
	{
		int pop=num%10;
		{
			if((pop==6)||(pop==9))
			{
				num=num/10;
				check_num(num);
			}
			else return false;
			

		}
	}
	else{
		return false;
	}
	return true;
}
int main() {
	int t,num;
	cin>>t;
	while(t!=0)
	{
	cin >> num;
	int res=check_num(num);	
	if(res==0)
	cout<<"NO"<<endl;
	else if(res==1)
	cout<<"YES"<<endl;		
	t--;	
	}	
}



