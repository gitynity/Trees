#include<bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node* left;
    node* right;
    
    node(int x, node*left , node* right)
    {
        this->val =x;
        this->left = left;
        this->right = right;
    }
};

vector<int> zigzag(node* root)
{
    vector<int> v;
    
    if(!root)
        return v;
    
    stack<node*> s1,s2;
    
    s1.push(root);
    
    while(!s1.empty() or !s2.empty())
    {
        while(!s1.empty())
        {
            auto temp1 = s1.top();
        
            if(temp1->right)
                s2.push(temp1->right);
            
            if(temp1->left)
                s2.push(temp1->left);
            
            v.push_back(temp1->val);
            s1.pop();
        }    
        
        while(!s2.empty())
        {
            auto temp2 = s2.top();
        
            if(temp2->left)
                s1.push(temp2->left);
            
            if(temp2->right)
                s1.push(temp2->right);
                
            v.push_back(temp2->val);
            s2.pop();
        }
        
    }
    
    for(auto i:v)
    cout<<i<<" ";
}

int main()
{
    node* n1 = new node(1,0,0);
    node* n2 = new node(2,0,0);
    node* n3 = new node(3,0,0);
    node* n4 = new node(4,0,0);
    node* n5 = new node(5,0,0);
    node* n6 = new node(6,0,0);
    node* n7 = new node(7,0,0);
    
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;
    
    zigzag(n1);
    
    return 0;
}
