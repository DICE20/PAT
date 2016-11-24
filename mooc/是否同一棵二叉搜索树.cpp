#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct TreeNode{
    int data;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int _data = -1){
        data = _data;
        left = NULL;
        right = NULL;
    }

};

TreeNode* createTree(TreeNode *root,int data){
    if(root == NULL){
        root = new TreeNode(data);
    }
    else{
        if(data< root->data)
            root->left = createTree(root->left,data);
        if(data> root->data)
            root->right = createTree(root->right,data);
    }
    return root;
}
bool isSame(TreeNode* root ,TreeNode* check){
    if(root ==NULL && check ==NULL){
        return true;
    }
    else if(root == NULL && check!= NULL){
        return false;
    }
    else if(root !=NULL && check==NULL){
        return false;
    }
    else if(root->data != check->data){
        return false;
    }

    else{
        bool flag1 = isSame(root->left,check->left);
        if(flag1){
            bool flag2 = isSame(root->right,check->right);
            if(flag2)
                return true;
        }
        return false;

    }



}

int main(){
    int n,l;
    bool end=false;
    while(scanf("%d",&n) != EOF && n != 0){
        TreeNode *fist = NULL;
        if(n==0){
            end = true;
        }
        cin>>l;
        
        for(int i = 0;i<n;i++){
            int temp;
            cin>>temp;
            fist = createTree(fist,temp);
        }
        for(int i = 0; i<l;i++){
            TreeNode *check = NULL;
            for(int j=0;j<n;j++){
                int temp;
                cin>>temp;
                check = createTree(check,temp);
            }
                if(isSame(fist,check))
                    cout<<"Yes"<<endl;
                else
                    cout<<"No"<<endl;

        }
        
    }

}
