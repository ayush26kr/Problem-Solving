//check if strings are rotations of each other or not
#include<iostream>
#include<string>
#include<queue>

using namespace std;

bool check_rotation(string str1,string str2)
{
    if(str1.length()!=str2.length())
    return false;
    queue<char>q1;
    queue<char>q2;
    for(int i=0;i<str1.length();i++)
    q1.push(str1[i]);
    for(int i=0;i<str2.length();i++)
    q2.push(str2[i]);
    int k=q2.size();
    while(k--)
    {
        char ch=q2.front();
        q2.pop();
        q2.push(ch);
        if(q2==q1)
        return true;
    }
    return false;

}
int main()
{
    string str1="GEETANJALI",str2="JALIGEETAN";
    if(check_rotation(str1,str2))
    cout<<str2<<" is a rotation of "<<str1;
    else
    cout<<str2<<" is not a rotation of "<<str1;
}