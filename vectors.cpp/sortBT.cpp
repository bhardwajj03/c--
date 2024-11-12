#include<bits/stdc++.h>
using namespace std;
class Tnode{
public:
    int data;
    Tnode *left;
    Tnode *right;
    //int index is taking a argument jab ham object banayenge int main mai 
    Tnode(int index):data(index),left(nullptr),right(nullptr){};
};
void inordertrav(Tnode* root , vector<int>& values){
    if(root){
        inordertrav(root->left,values);
        values.push_back(root->data);
        inordertrav(root->right,values);
    }
}
void uptree(Tnode* root, vector<int>& values, int& i){
    if(root){
        uptree(root->left,values,i);
        root->data=values[i++];
        uptree(root->right,values,i);
    }
}

void sortedtree(Tnode* root){
    if(root==0){
        return ;
    }
    vector<int> values;
    inordertrav(root,values);
    sort(values.begin(),values.end());
    int i=0;
    uptree(root,values,i);
}
void printinorder(Tnode* root){
    if(root){
        printinorder(root->left);
        cout<<root->data<<",";
        printinorder(root->right);
    }
}

int  main(){
    Tnode* root =new Tnode(4);
    root->left = new Tnode(3);
    root->right = new Tnode(6);
    root->left->left = new Tnode(7);
    root->left->right = new Tnode(8);

    cout << "our binary tree ";
    printinorder(root);
    cout<<endl;
    sortedtree(root);
    cout << "Sorted binary tree ";
    printinorder(root);
    cout<<endl;
}