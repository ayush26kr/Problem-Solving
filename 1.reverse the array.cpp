//1.Reversing the array
#include<iostream>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
	while (start < end)
	{
		int temp = arr[start]; 
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	} 
}
void print(int arr[],int size){
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	
	int size;
	cin>>size;
	int arr[size];
	for(int i=1;i<=size;i++)
	{
		cin>>arr[i];
	}
	reverseArray(arr,0,size);
	print(arr,size);
	
}
