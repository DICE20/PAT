#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    int N,M;
    vector<int> v[105];
    queue<int> q;
    cin>>N>>M;
    for(int i = 0;i<M;i++){
        int f,c;
        cin>>f>>c;
        for(int j = 0;j<c;j++){
            int child;
            cin>>child;
            v[f].push_back(child);
        }
    }
    q.push(1);
    int temp = 0,left = 1,cur = 0,tplv=1,num = 0,level = 0;
    while(!q.empty()){
        temp = q.front();
        q.pop();
        left--;
        for(int i=0;i<v[temp].size();i++){
            q.push(v[temp][i]);
            cur++;
        }
        if(left==0){
            left=cur;
            tplv++;
            if(cur>num){
                num = cur;
                level = tplv;
               }
            cur = 0;
        }
    }
    cout<<num<<" "<<level;
}
