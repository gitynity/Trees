#include <bits/stdc++.h>
using namespace std;

class tree
{
public:
	int data;
	tree* left;
	tree* right;
};

bool isidentical(tree* t1 , tree* t2)
{
	if(t1==NULL and t2==NULL)
		return true;
	if(t1==NULL)
		return false;
	if(t2==NULL)
		return false;
		
	else
	{
		return ((t1->data == t2->data) and isidentical(t1->left , t2->left) and (isidentical(t1->right , t2->right)));
	}
}

bool issubtree(tree* t , tree* s)
{
	if(!isidentical(t,s))
	{
		isidentical(t->left,s);
		isidentical(t->right,s);
	}
}
