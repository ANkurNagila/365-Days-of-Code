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


int main()
{
    TreeNode<int> *root=new TreeNode<int>(10);

    TreeNode<int> *child1=new TreeNode<int>(20);
    TreeNode<int> *child2=new TreeNode<int>(30);

    TreeNode<int> *grandchild1=new TreeNode<int>(32);


    root->children.push_back(child1);
    root->children.push_back(child2);

    child2->children.push_back(grandchild1);

    print(root);

}
