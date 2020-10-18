void preorder(Node* root , vector<int>& v , int level , vector<bool>& tf)
{
	
	if(!root)
	{
		return ;
	}
	
	if(tf[level]==false)
	{
	    tf[level] = true;
	    v.push_back(root->data);
	} //end if here
  
	    preorder(root->left,v,level+1 , tf);
	    preorder(root->right,v,level+1 , tf);
}

vector<int> leftView(Node *root)
{
    vector<int> v;
    vector<bool> tf(101,false); 
    if(!root) 
        return v;
    
    preorder(root , v , 1 , tf);
    
    for(auto i=0;i<101;i++)     //since vector is passed by reference ,
        tf[i]=false;            //its values are changed to true in some places
                                //which will give wrong answers in future test cases
		
							                  //since v is returned , every test case gets a new v
																//therefore we dont need to reset v
    return v;
}
