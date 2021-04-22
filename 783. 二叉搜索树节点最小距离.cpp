#if 0
#include <bits/stdc++.h>
using namespace std;



class TreeNode
{

public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(): val(0),left(nullptr),right(nullptr) {}
    TreeNode(int x): val(x),left(nullptr),right(nullptr) {}
    TreeNode(int x,TreeNode *left,TreeNode *right): val(x),left(left),right(right) {}
    int getData() const
    {
        return val;
    }
    void setData(const int &v)
    {
        val=v;
    }
    TreeNode *getLeft()
    {
        return left;
    }
    TreeNode *getRight()
    {
        return right;
    }
    void setLeft(TreeNode*& newLeft)
    {
        left=newLeft;
    }
    void setRight(TreeNode*& newRight)
    {
        right=newRight;
    }
};


class Solution
{
public:
    void dfs(TreeNode *root, int &pre,int &ans)
    {
        if (root==NULL) return ;
        dfs(root->left,pre,ans);
        if (pre==-1)
            pre=root->val;
        else
        {
            ans=min(ans,root->val-pre);
            pre=root->val;
        }
        dfs(root->right,pre,ans);


    }
    int minDiffInBST(TreeNode* root)
    {
        int ans=1000007;
        int pre=-1;
        dfs(root,pre,ans);
        return ans;

    }
};

void inOder(TreeNode *everyNode)
{
    if(everyNode)
    {
        inOder(everyNode->getLeft());
        printf("%d",everyNode->getData());
        inOder(everyNode->getRight());
    }
}

int main()
{
    TreeNode *t=NULL;
    int data;
    int val[5]= {4,2,6,1,3};
    for(int i=0;i<5;i++)
    {
        TreeNode *newNode = new TreeNode(val[i]);
        if (t==NULL) t=newNode;
        else{
            TreeNode *pTemp = t;
            while(true)
            {
                if(val[i]<pTemp->getData())
                {
                    if(pTemp->getLeft()==NULL)
                    {
                        pTemp->setLeft(newNode);
                        break;
                    }
                    else{
                        pTemp=pTemp->getLeft();
                    }
                }
                else
                {
                    if(pTemp->getRight()==NULL)
                    {
                        pTemp->setRight(newNode);
                        break;
                    }
                    else
                    {
                        pTemp=pTemp->getRight();
                    }
                }
            }
        }
    }

    Solution s;
    int res = s.minDiffInBST(t);
    printf("%d\n",res);
    inOder(t);
    return 0;


}

#endif // 1
