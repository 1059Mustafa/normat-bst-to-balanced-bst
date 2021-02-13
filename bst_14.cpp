void inorder(Node* root,vector<int>&v)
{
    if(!root)
    {
        return;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}

Node* BST(vector<int>arr,int start,int end)
{
    if(start>end)
    {
        return NULL;
    }
    int mid=(start+end)/2;
    Node *root = new Node(arr[mid]);
    root->left=BST(arr,start,mid-1);
    root->right=BST(arr,mid+1,end);
    return root;;
}


Node* buildBalancedTree(Node* root)
{
	vector<int>v;
	inorder(root,v);
// 	int n=v.size();
	return BST(v,0,v.size()-1);
	
}

