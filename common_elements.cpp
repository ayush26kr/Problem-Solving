#include<iostream>
#include<vector>
using namespace std;

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>result;
            int i=0,j=0,k=0;
            while(i<n1 && j<n2 && k<n3)
            {
                if(A[i]==B[j] && B[j]==C[k] )
                {
                    int temp=A[i];
                    result.push_back(temp);
                    i++;j++;k++;
                }
                else if(A[i]<B[j])
                i++;
                else if(B[j]<C[k])
                j++;
                else 
                k++;
            }
            return result;
            
        }

int main()
{
    int ar1[] = {1, 5, 10, 20, 40, 80};
    int ar2[] = {6, 7, 20, 80, 100};
    int ar3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = sizeof(ar1)/sizeof(ar1[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    int n3 = sizeof(ar3)/sizeof(ar3[0]);
 
    cout << "Common Elements are ";
    vector<int>result=commonElements(ar1, ar2, ar3, n1, n2, n3);
    for(auto c:result)
    cout<<c<<" ";
    return 0;
}