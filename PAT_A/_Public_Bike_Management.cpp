#include <iostream>
#include <vector>
#define MAX 1001
using namespace std;
int c,n,s,m;
int ajM[MAX][MAX];
int visited[MAX];
int costTime;
vector<int> path,resultpath;

void DFS(int star,int index,int end){
    visited[index]=1;
    path.push_back(index);
    costTime += ajM[index][star];
    if(index==end){

    }

    for(int j=0;j<n;j++){
       if(ajM[index][j]>0&&visited[j]!=0){
           DFS(index,j,end);
       }

    }
}

int main(){
    cin>>c>>n>>s>>m;
    int alls[n];
    for(int i = 0;i<n;i++){
        cin>>alls[n];
    }
    for(int i = 0;i<m;i++){
        int t,a,b;
        cin>>t>>a>>b;
       ajM[a][b]=t;
    } 

}
