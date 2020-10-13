#include<bits/stdc++.h>
using namespace std;

struct node
{
	int val;
	node* left;
	node* right;
	
	node(int x , node*l , node*r)
	{
	    this->val = x;
	    this->left = l;
	    this->right = r;
	}
};

void preorder(node*root , vector<int>& v)
{
	if(!root)
		return;
	v.push_back(root->val);
	preorder(root->left,v);
	preorder(root->right,v);
}

void inorder(node*root , vector<int>& v)
{
	if(!root)
		return;
	inorder(root->left,v);
	v.push_back(root->val);
	inorder(root->right,v);
}

void postorder(node*root , vector<int>& v)
{
	if(!root)
		return;
	postorder(root->left,v);
	postorder(root->right,v);
	v.push_back(root->val);
	
}

void print_vector(vector<int> v)
{
for(auto i:v)
  cout<<i<<" ";
cout<<endl;
}

int main()
{
node* n1 = new node(1,0,0);
node* n2 = new node(2,0,0);
node* n3 = new node(3,0,0);

n1->left = n2;
n1->right = n3;

vector<int> res;

preorder(n1,res);
print_vector(res);

res.clear();

inorder(n1,res);
print_vector(res);

res.clear();

postorder(n1,res);
print_vector(res);

res.clear();

return 0;
}
