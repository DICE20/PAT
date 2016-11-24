#include <iostream>
#include <queue>
#include <vector>
using namespace std;
 
vector<vector<int> > follow;
bool visited[1000];
//广度优先遍历，level是层数，这道题目有遍历层数限制
void BFS(int member,int level,int cnt){
    for(int i = 0;i<cnt;i++){
        visited[i]=false;
    }
    queue<int> q;
    q.push(member);
    int l = 0,n=0;
    int leftcnt=1,curcnt=0;
    while(!q.empty()&&l<=level){
        int f = q.front();
        if (!visited[f-1]){
        for(int j = 0;j<follow[f-1].size();j++){
                    q.push(follow[f-1][j]);
                    curcnt++;
                }
        }
        visited[f-1]=true;
        q.pop();
        leftcnt--;
        if(leftcnt ==0){
            leftcnt = curcnt;
            curcnt = 0;
            l++;
        }
    }
    for(int i= 0;i<cnt;i++){
        if(visited[i])
            n++;
    }
    cout<<n-1;
}
int main(){
    int N,L; //N用户总数 L层数
    cin>>N>>L;
    follow.resize(N);
//录入数据时要反向录入
    for(int i=0;i<N;i++){
        int f,t;  //读入的followed by user
        cin>>f;
        for(int j=0;j<f;j++ ){
            cin>>t;
            follow[t-1].push_back(i+1);
        }
    }
     int kn;
    cin>>kn;
    for(int i=0;i<kn;i++){
        int t = 0;
        cin>>t;
        BFS(t,L,N);
        if(i!=kn-1)
            cout<<endl;
    }
}