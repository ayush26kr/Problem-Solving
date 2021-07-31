#include<iostream>
using namespace std;

void printsubstring(string str,int low,int high)
{
    for(int i=low;i<=high;++i)
    cout<<str[i];
}

int longestPalSubstr(string str)
{
    int n=str.size();
    int max_length=1; //all substrings of length 1 are plaindrome
    int start=0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int flag=1;
            for(int k=0;k<(j-i+1)/2;k++)
            if(str[i+k]!=str[j-k])
                flag=0;

                if(flag && (j-i+1)>max_length)
                {
                    start=i;
                    max_length=j-i+1;
                }
        }
    }

    
    cout<<"Longest Palindrome Substring is: ";
    printsubstring(str,start,start+max_length-1);

    return max_length;

    
}


int main()
{
    string str = "forgeeksskeegfor";
    cout << "\nLength is: "
         << longestPalSubstr(str);
    return 0;
}