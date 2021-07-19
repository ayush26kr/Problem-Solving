#include <bits/stdc++.h>
using namespace std;

// Function for merging two
// sorted arrays without
// extra space

	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	 for(int i=0;i<n;i++)
	 {
	     if(arr1[i]>arr2[0])
	     {
	        swap(arr1[i],arr2[0]);
	        int j=0;
	        while(j+1<m && arr2[j]>arr2[j+1])
	            swap(arr2[j],arr2[j+1]),j++;
	     }
	  }
	  
	  //merge arr1[] and arr2[]
	  for(int c=0;c<n;c++)
	  cout<<arr1[c]<<" ";
	  for(int d=0;d<m;d++)
	  cout<<arr2[d]<<" ";
}

int main()
{

    // input size of both the arrays

    int M, N;
    cin >> M >> N;

    int A[M], B[N];

    // input both the arrays

    for (int i = 0; i < M; i++)
        cin >> A[i];
    for (int i = 0; i < N; i++)
        cin >> B[i];

    // function call

    merge(A, B,M,N);
}