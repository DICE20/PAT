#include <iostream>
#include <algorithm>
using namespace std;
int B[1000];
bool Insertion_Sort(int a[],int n){
    int Tmp,i;
    bool done = false;
    for(int p=2;p<=n;p++){
        bool flag = true;
        Tmp = a[p];
        for( i = p;i>0&&a[i-1]>Tmp;i--){
            a[i]=a[i-1];
        }
        a[i] = Tmp;
        for(int i = 1;i<=n;i++){
            if(a[i]!=B[i])
                flag = false;
        }
        if(flag){
            done = true;
            continue;
        }
        if(done){
            return true;
        }

    }
    return false;
}
void sink(int a[],int i,int n){
    int lc = 2*i;
    int rc = lc + 1;
    int mc = i;
    if(i<=n/2){
        if(lc<=n&&a[lc]>a[mc])
            mc = lc;
        if(rc<=n&&a[rc]>a[mc])
            mc = rc;
    }
    if(mc!=i){
        swap(a[i],a[mc]);
        sink(a,mc,n);
    }

}

bool Heap_Sort(int A[],int N){
//heapify
    bool done = false;
    for(int i = N/2;i>=1;i--)
        sink(A,i,N);
    for(int i = N;i>=1;i--){
        bool flag = true;
        swap(A[1],A[i]);
        sink(A,1,i-1);
        for(int j = 1;j<=N;j++){
            if(A[j]!=B[j])  
                flag = false;

        }
        if(flag){
            done = true;
            continue;
        }
        if(done){
            return true;
        }
    }
    return false;
}

int main(){
    int N;
    cin>>N;
    int A[101];
    int A2[101];
    for(int i = 1;i<=N;i++){
        cin>>A[i];
        A2[i]=A[i];
    }
    for(int i = 1;i<=N;i++){
        cin>>B[i];
    }
    //Heap_Sort(A,N);
    if(Insertion_Sort(A,N)){
        cout<<"Insertion Sort"<<endl;
    for(int i = 1;i<=N;i++){
        cout<<A[i];
        if(i!=N)
            cout<<" ";
    }
    }
    if(Heap_Sort(A2,N)){
       cout<<"Heap Sort"<<endl;
    for(int i = 1;i<=N;i++){
        cout<<A2[i];
        if(i!=N)
            cout<<" ";
    }
    }

    return 0;
}
