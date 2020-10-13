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


vector<int> levelordertraversal1(node*root)     //left2right-top2bottom
{
    vector<int> v;
    
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

vector<int> levelordertraversal2(node*root)     //right2left-top2bottom
{
    vector<int> v;
    
	if(!root) return v;
	
	queue<node*> q;
	
	q.push(root);
	
	while(!q.empty())
	{
		auto temp = q.front();
		
		if(temp->right)
			q.push(temp->right);
		
		if(temp->left)
			q.push(temp->left);
		
		v.push_back(temp->value);
		
		q.pop();
	}
	return v;
}

vector<int> levelordertraversal3(node*root)     //left2right-bottom2top
{
    vector<int> v;
    
	if(!root) return v;
	
	queue<node*> q;
	
	q.push(root);
	
	while(!q.empty())
	{
		auto temp = q.front();
		
		if(temp->right)
			q.push(temp->right);
		
		if(temp->left)
			q.push(temp->left);
		
		v.push_back(temp->value);
		
		q.pop();
	}
	reverse(v.begin(),v.end());
	return v;
}

void print_vector(vector<int>& v)
{
    for(auto i:v)
		cout<<i<<" ";
	cout<<"\n";
	v.clear();
}

vector<int> levelordertraversal4(node*root)     //right2left-bottom2top
{
    vector<int> v;
    
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
	reverse(v.begin(),v.end());
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
    
    /*
    
            1
           / \
          2   3
         /
        4  
    
    */
    
    //node n5(5,0,0); will be stored in stack memory
    //node* n6 = new node(6,0,0); will be stored in heap memory
    
	std::vector<int> res;
	res = levelordertraversal1(n1);
	cout<<"Top to Bottom and Left to Light\n";
	print_vector(res);
	
	res = levelordertraversal2(n1);
	cout<<"Top to Bottom and Right to Left\n";
	print_vector(res);
	
	res = levelordertraversal3(n1);
	cout<<"Bottom to Top and Left to Right\n";
	print_vector(res);

    res = levelordertraversal4(n1);
    cout<<"Bottom to Top and Right to Left\n";
    print_vector(res);
	
	return 0;
	
	
}
