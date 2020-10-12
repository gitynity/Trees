struct node
{
	int val;
	node* left;
	node* right;
};

void preorder(node*root , vector<int>& v;)
{
	if(!root)
		return;
	v.push_back(root->val);
	preorder(root->left);
	preorder(root->right);
}

void inorder(node*root , vector<int>& v;)
{
	if(!root)
		return;
	inorder(root->left);
	v.push_back(root->val);
	inorder(root->right);
}

void postorder(node*root , vector<int>& v;)
{
	if(!root)
		return;
	postorder(root->left);
	postorder(root->right);
	v.push_back(root->val);
	
}

void print_vector(vector<int> v)
{
for(auto i:res)
  cout<<i<<" ";
cout<<endl;
}

int main()
{
node n1 = new node();
node n2 = new node();
node n3 = new node();
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
