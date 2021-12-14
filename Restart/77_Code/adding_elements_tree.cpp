#include<iostream>
#include<vector>

using namespace std;

template <typename T>
class TreeNode
{
    public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T ele)
    {
        this->data=ele;
    }
};


template <typename T>
void print(TreeNode<T> *root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<":";

    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;

    for(int i=0;i<root->children.size();i++)
    {
        print(root->children[i]);
    }
}

TreeNode<int>* accept_node()
{
    int root_val;
    cin>>root_val;

    TreeNode<int> *root=new TreeNode<int>(root_val);

    int n;
    cout<<"Enter Number of child:";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        TreeNode<int> *child=accept_node();
        root->children.push_back(child);
    }

    return root;
}


int main()
{

    TreeNode<int>* root=accept_node();
    print(root);

}
