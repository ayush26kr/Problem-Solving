/*Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, …..  */
#include<iostream>
using namespace std;
void print(int num)
{
    cout<<num<<" ";
}
int maxdivide(int a,int b)
{
    while(a%b==0)
    a/=b;
    return a;
}
int isugly(int no)
{
    no=maxdivide(no,2);
    no=maxdivide(no,3);
    no=maxdivide(no,5);

    return (no==1)?1:0;
}
get_n_ugly_number(int num)
{
    int count=1;
    int i=1;
    cout<<"Ugly numbers are: 1 ";
    while(count<num)
    {
        i++;

        if(isugly(i)){
            print(i);
            count++;
        }
        
    }
    cout<<endl;
    return i;

}
int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<get_n_ugly_number(num)<<" is the "<<num<<"th Ugly number";
    return 0;
}