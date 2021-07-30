//Element with max frequency 
#include<iostream>
#include<unordered_map>
using namespace std;

int mostFrequent(int arr[],int n)
{
    unordered_map<int,int>hash;
    //insert all elements to the hash
    for(int i=0;i<n;i++)
    hash[arr[i]]++;

    //find the max freq
    int max_count=0,res=-1;
    for(auto i:hash)
    {
        if(max_count<i.second){
            res=i.first;
            max_count=i.second;
        }
    }
    return res;
    //max_count stores the frequency of res
}
int main()
{
	int arr[] = { 1, 5, 2, 1, 3, 2, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Element with maximum frequency is :"<< mostFrequent(arr, n);
	return 0;
}