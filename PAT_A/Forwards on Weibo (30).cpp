#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<vector<int>> follow;
vector<bool> visited;
vector<int> max;
queue<int> q;
vector<int> k;
int BFS(int member,int level){
    q.push(member);
    int l = 0,n=0;
    while(!q.empty()&&l<=level+1){
        int f = q.front()-1;
        for(int i =0;i<follow.size();i++){
            for(int j = 0;j<follow[i].size();j++){
                if(!visited[i]&&follow[i][j]==f)
                q.push(i);
            }
        }
        visited[f]=true;
        n++;
        q.pop();
        l++;
    }
    cout<<n<<endl;
    return n;
}

int main(){
    int N,L; //N用户总数 L层数
    cin>>N>>L;
    int f;  //读入的followed by user 
    for(int i=0;i<N;i++){
        cin>>f;
        vector<int> fu;//followed user
        for(int j=0;j<f;j++ ){
            int t;
            cin>>t;
            fu.push_back(t);
        }
        if(f == 0){
            fu.push_back(0);
        }
        follow.push_back(fu);
        
        visited.push_back(false);
    }
    int kn;
    cin>>kn;
    for(int i=0;i<kn;i++){
        int t = 0;
        cin>>t;
        //BFS(2,L);
    }


}
