#include<bits/stdc++.h>
using namespace std;

struct node
{
	int value;
	node* left;
	node* right;
	
	node(int val , node*l , node*r)
	{
	    this->value = val;
	    this->left = l;
	    this->right = r;
	}
};


vector<int> v;

vector<int> levelordertraversal(node*root)
{
	if(!root) return v;
	
	queue<node*> q;
	
	q.push(root);
	
	while(!q.empty())
	{
		auto temp = q.front();
		
		if(temp->left)
			q.push(temp->left);
		
		if(temp->right)
			q.push(temp->right);
		
		v.push_back(temp->value);
		
		q.pop();
	}
	return v;
}


int main()
{
	node *n1 = new node(1,0,0);  //will be stored in heap memory because of new operator
	
	node *n2 = new node(2,0,0);
	
	node *n3 = new node(3,0,0);
    
	n1->left = n2;
	n1->right = n3;
    
  node* n4 = new node(4,0,0);
    
  n2->left = n4;
    
  //node n5(5,0,0); will be stored in stack memory
    
	std::vector<int> res;
	res = levelordertraversal(n1);
	for(auto i:res)
		cout<<i<<" ";
	return 0;
	
	
}
