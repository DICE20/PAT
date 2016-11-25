#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
int N;
vector<int> input;
vector<int> output;
int GetLeftLength(int n){
    int l;
    int h = log2(n+1);
    int x = n + 1 - pow(2,h);
    if(x<pow(2,h-1))
       l = pow(2,h-1)-1+x; 
    else
       l = pow(2,h) - 1;
    return l;
}
void solve(int start,int end,int TRoot){
    int n = end - start +1;
    if(n==0){
        return;
    }
    int L = GetLeftLength(n); 
    output[TRoot] = input[start+L];
    solve(start,start+L-1,TRoot*2+1);
    solve(start + L +1,end,TRoot*2+2);

}

int main(){
    cin>>N;
    input.resize(N);
    output.resize(N);
    for(int i = 0;i<N;i++){
       cin>>input[i]; 
    }
    sort(input.begin(),input.end());
    solve(0,N-1,0);
    for(int i = 0;i<N;i++){
        cout<<output[i];
        if(i!=N-1)
            cout<<" ";
    }
}

