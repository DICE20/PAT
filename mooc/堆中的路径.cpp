#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N,M;
vector<int> Heap;
int size;
void insert(int x){
    int i;
    for(i=++size;Heap[i/2]>x;i/=2)
        Heap[i] = Heap[i/2];
    Heap[i] = x;
}

int main(){
    cin>>N>>M;
    Heap.resize(N);//creat a empty Heap
    Heap[0] = -10001;//set the flag
    size = 0;
    int x;
    for(int i = 0;i<N;i++){//insert the input
        cin>>x;
        insert(x);
    }
    int j;
    for(int i=0;i<M;i++){//search every parent point untill 0
        cin>>j;
        cout<<Heap[j];
        while(j>1){
            j/=2;
            cout<<" "<<Heap[j];

        }
        cout<<endl;
    }
}

