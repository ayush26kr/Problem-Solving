// C++ program to find whether an array
// is subset of another array
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    int i=0,j=0;
    string s;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a2[i]==a1[j])
            break;
        }
        if(j==n)
        return s="No";
    }
    return s="Yes";
}

// Driver code
int main()
{
	int arr1[] = { 8,4,5,3,1,7,9 };
	int arr2[] = { 5,1,3,7,9};

	int n= sizeof(arr1) / sizeof(arr1[0]);  //n->arr1
	int m = sizeof(arr2) / sizeof(arr2[0]);   //m->arr2

	cout<<isSubset(arr1,arr2,n,m);
	return 0;
}
