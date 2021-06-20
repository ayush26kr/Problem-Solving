//printing a binary tree in vertical order
#include<iostream>
#include<map>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        data=d;
        left=right=NULL;
    }
};

//always pass stl containers by reference else a copy will be created
vertical_order_print(node*root,int d,map<int,vector<int>>&m)
{
    //base case
    if(root==NULL){
        return 0;
    }
    m[d].push_back(root->data);
    vertical_order_print(root->left,d-1,m);
    vertical_order_print(root->right,d+1,m);
    return 0;
}
int main()
{
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->left->right->right=new node(8);
    root->right->left->right=new node(9);

    map<int,vector<int>>m;
    int d=0;
    vertical_order_print(root,d,m);

    for(auto p:m){
        cout<<p.first<<"-> ";
        for(int x:p.second){
            cout<<x<<",";
        }
        cout<<endl;
    }

}