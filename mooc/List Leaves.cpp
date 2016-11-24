#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> result;
struct TreeNode{
    int num;
    int left;
    int right;
};
void preoder(TreeNode root,TreeNode *myTree){
        if(root.left==-1&&root.right==-1)
            cout<<root.num;
        if(root.left!=-1)
        preoder(myTree[root.left],myTree);
        if(root.right!=-1)
        preoder(myTree[root.right],myTree);
}
void q(TreeNode root,TreeNode *myTree){
    queue<TreeNode> q;
    q.push(root);
    TreeNode t;
    int left=1,curent=0;
    while(!q.empty()){
       t = q.front();
       if(t.left!=-1){
       q.push(myTree[t.left]);
       curent++;
       }
       if(t.right!=-1){
       q.push(myTree[t.right]);
       curent++;
       }
       if(t.left==-1&&t.right==-1) 
           result.push_back(t.num);
       q.pop();
       left--;
       if(left==0){
           left = curent;
           curent = 0;
       }

    }

}

int main(){
   int N;
   int root=0;
   cin>>N;
   TreeNode myTree[N];
   for(int i = 0;i < N;i++){
       char left,right; 
       cin>>left>>right;
       if(left!='-')
           myTree[i].left = left-'0';
       else
           myTree[i].left = -1;
       if(right!='-')
           myTree[i].right = right-'0';
       else 
           myTree[i].right = -1;
       myTree[i].num = i;
   }
   for(int i = 0;i<N;i++){
       int isroot = true;
       for(int j = 0;j<N;j++){
           if(i==myTree[j].left||i==myTree[j].right){
           isroot = false;
           break;
           }
       }
       if(isroot){
            root = i;
            break;
       }
   }
   q(myTree[root],myTree);
   for(long i=0;i<result.size();i++){
       cout<<result[i];
       if(i!=result.size()-1)
           cout<<" ";
   }

   return 0;
}

