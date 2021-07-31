#include<iostream>
#include<vector>
using namespace std;
bool isBalanced(int N)
{
    string st = to_string(N);
    int n=st.size();
    vector<int>check;
   vector<bool>visited(n,false);
   for(int i=0;i<n;i++)
   {
       if(visited[i]==true)
       continue;

       int count=1;
       for(int j=i+1;j<n;j++)
       {
           if(st[i]==st[j]){
               visited[j]=true;
               count++;
           }
           
       }
       check.push_back(count);
   }
       int number=check[0];
       for(int i=1;i<check.size();i++)
       {
           if(check[i]==check[0])
           continue;
           else return false;
       }
       return true;
}
int pass_gen(vector<int>&input)
{
    int n=input.size();
    vector<int>stable;
    vector<int>unstable;
    int st_sum=0;
    int ust_sum=0;
    for(int i=0;i<n;i++)
    {
        int temp=input[i];
        if(isBalanced(temp)==true)
        stable.push_back(temp);
        else
        unstable.push_back(temp);
    }

    for(int i=0;i<stable.size();i++)
        st_sum+=stable[i];


    for(int j=0;j<unstable.size();j++)
        ust_sum+=unstable[j];

    return st_sum-ust_sum;
     
}

int main()
{
    int n;
    cin>>n;
    vector<int>input;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        input.push_back(num);
    }
    
    cout<<"Password is: "<<pass_gen(input);
}