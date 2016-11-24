#include <iostream>
#include <vector>
using namespace std;
int N;
vector<int> inorder;
vector<int> preorder;
vector<int> postorder;
void solve(int index,int start ,int end){
    if(start>end){
        return;
    }
    int i = start;
    while(i<end&&inorder[i]!=preorder[index])i++;
    solve(index+1,start,i-1);
    solve(index+1+i-start,i+1,end);
    postorder.push_back(preorder[index]);
}

int main(){
    cin>>N;
    vector<int> temp;
    for(int i=0;i<2*N;i++){
        string str;
        int n;
        cin>>str;
        if(str == "Push"){
            cin>>n;
            temp.push_back(n);
            preorder.push_back(n);
        }

        if(str=="Pop"){
            inorder.push_back(temp.back());
            temp.pop_back();
        }
    }
    solve(0,0,N-1);
    for(int i = 0;i<postorder.size();i++){
        cout<<postorder[i];
        if(i!=postorder.size()-1){
            cout<<" ";
        }

    }


}

