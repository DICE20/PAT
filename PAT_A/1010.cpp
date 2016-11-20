#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define Null -1
using namespace std;
struct tree{
    int left;
    int right;
    int data;
};
int main(){
    int N;
    cin>>N;
    int keys[N];
    tree Tree[N];
    vector<int> v;
    queue<int> q;
    vector<tree> order;
    for(int i=0;i<N;i++){
        cin>>Tree[i].left>>Tree[i].right;
    }
    for(int i=0;i<N;i++){
        cin>>keys[i];
    }
    sort(keys,keys+N);
    int T = 0,i=0;
    while(T!=-1||!v.empty()){
        while(T!=-1){
            v.push_back(T);
            T = Tree[T].left;
        }
        if(!v.empty()){
            T = v.back();
            v.pop_back();
            Tree[T].data = keys[i];
            i++;
            T = Tree[T].right;
        }
    }
    T = 0;
    q.push(T);
   while(!q.empty()){
       T = q.front();
       if(Tree[T].left!=Null)
       q.push(Tree[T].left);
       if(Tree[T].right!=Null)
       q.push(Tree[T].right);
       cout<<Tree[T].data;
       if(q.size()>1)
           cout<<" ";
      q.pop();
   }

}
