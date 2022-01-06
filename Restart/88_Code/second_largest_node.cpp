#include <iostream>
#include <queue>
#include <vector>
#include <climits>
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

class Number
{
    public:
    	TreeNode<int> *max;
    	TreeNode<int> *sec_max;

    Number()
    {
        max=NULL;
        sec_max=NULL;
    }
};

Number *get_sec_max(TreeNode<int> *root)
{
    Number *n1=new Number();
    if(root==NULL)
    {
        return n1;
    }


    TreeNode<int> *max1=root;
    TreeNode<int> *sec_max1=NULL;

    for(int i=0;i<root->children.size();i++)
    {
        if(root->children[i]->data>max1->data)
        {
            sec_max1=max1;
            max1=root->children[i];
        }
        else if(sec_max1==NULL and root->children[i]->data!=max1->data)
        {
            sec_max1=root->children[i];
        }
    }

    n1->max= max1;
    n1->sec_max=sec_max1;


    for(int i=0;i<root->children.size();i++)
    {
        Number *short_ans=get_sec_max(root->children[i]);

        if(n1->max->data < short_ans->max->data)
        {
            if(n1->sec_max==NULL)
            {
                n1->max=short_ans->max;
                n1->sec_max=short_ans->sec_max;
            }
            else
            {
                if(n1->max->data > short_ans->sec_max->data)
                {
                    n1->sec_max=n1->max;
                    n1->max=short_ans->max;
                }
                else
                {
                    n1->max=short_ans->max;
                	n1->sec_max=short_ans->sec_max;
                }
            }
        }
        else if(n1->max->data!=short_ans->max->data and (n1->sec_max==NULL or n1->sec_max->data < short_ans->max->data))
        {
            n1->sec_max=short_ans->max;
        }
    }


    return n1;
}

TreeNode<int>* getSecondLargestNode(TreeNode<int>* root) {
    TreeNode<int> *ans=get_sec_max(root)->sec_max;

    return ans;
    // Write your code here
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

    TreeNode<int>* ans = getSecondLargestNode(root);

    if (ans != NULL) {
        cout << ans->data;
    } else {
        cout << INT_MIN;
    }

}
