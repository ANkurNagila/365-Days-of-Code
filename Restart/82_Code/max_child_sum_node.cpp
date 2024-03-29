#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};


int maxi=0;

int sum(TreeNode<int> *root)
{
    int count=root->data;
    for(int i=0;i<root->children.size();i++)
    {
        count+=root->children[i]->data;
    }
    return count;
}

TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    if(root->children.size()==0){
        if(root->data>maxi)
            maxi=root->data;
        return root;
    }
    
    TreeNode<int> *ans;
    int ele=sum(root);
    if(ele>maxi)
    {
        maxi=ele;
        ans=root;
    }
    
    for(int i=0;i<root->children.size();i++)
    {
        ele=sum(root->children[i]);
        TreeNode<int> *small_ans=maxSumNode(root->children[i]);
        if(ele>=maxi)
        {
            maxi=ele;
            ans=root->children[i];
            small_ans=ans;
        }
        else
        {
            ans=small_ans;
        }
    }
    
    return ans;
}

TreeNode<int>* takeInputLevelWise() {
    int rootData;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0) {
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++) {
            int childData;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}

int main() {
    TreeNode<int>* root = takeInputLevelWise();

    TreeNode<int>* ans = maxSumNode(root);

    if (ans != NULL) {
        cout << ans->data;
    }
}
