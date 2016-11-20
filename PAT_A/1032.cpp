#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isBST = true;
struct TreeNode{
    TreeNode* left;
    TreeNode* right;
    int data;
};
TreeNode* BTSfromOrder(int *preorder,int *inorder,int length,int n,int *op,int *oi){
    if(length == 0)
        return NULL;
    TreeNode* node = new TreeNode;
    node->data = *preorder;
    int rootIndex = 0;
    for(;rootIndex<length;rootIndex++){
        if(inorder[rootIndex]==node->data)
            break;
    }
    if((preorder +rootIndex+1<=op +n) && (inorder + rootIndex +1<=oi+n)){
    node->left = BTSfromOrder(preorder+1,inorder,rootIndex,n,op,oi);
    node->right = BTSfromOrder(preorder + rootIndex +1,inorder+rootIndex+1,length-(rootIndex + 1),n,op,oi);
    }
   // else
    {
    //    isBST = false;
    //    return NULL;
    }
    return node;

}
void BTSPostOrder(TreeNode* tree,TreeNode* o){
    if(tree){
    BTSPostOrder(tree->left,o);
    BTSPostOrder(tree->right,o);
    cout<<tree->data;
    if(tree!=o)
        cout<<" ";
    }
}

bool cmp(int a,int b){
    return a>b;
}


int main(){
    int N;
    cin>>N;
    int preorder[N];
    int inorder[N];
    for(int i=0;i<N;i++){
        int n = 0;
        cin>>n;
        preorder[i]=n;
        inorder[i]=n;
    }
    sort(inorder,inorder+N);
    reverse(inorder,inorder+N);
    TreeNode *myBST = BTSfromOrder(preorder,inorder,N,N,preorder,inorder);

    if(isBST){
        cout<<"YES"<<endl;
        BTSPostOrder(myBST,myBST);
    }
    
    else{
        isBST = true;
        reverse(inorder,inorder+N);
        TreeNode *myBSTIM = BTSfromOrder(preorder,inorder,N,N,preorder,inorder);
        if(isBST){
            cout<<"YES"<<endl;
            BTSPostOrder(myBSTIM,myBSTIM);
            }
        else
            cout<<"NO";
    }
}
