#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int birthdayCakeCandles(vector<int> candles)
 {
     sort(candles.begin(),candles.end());
	 int n=candles.size();
     int max= candles[n-1];
     int c=0;
     for(int i =0; i<candles.size(); i++)
      {
     if(candles[i]==max)
     {
         c++;
     }
     }
 return c;
}

int main()
{
	vector<int>candles={4,1,2,4,4,2};
	cout<<"max count :"<<birthdayCakeCandles(candles);
}
