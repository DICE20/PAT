#include <iostream>
#include <math.h>
using namespace std;
void findsppluy(int mb[],int i,int *time){
    if(mb[i]!=-1){
        *time = *time +1;
        findsppluy(mb,mb[i],time);
    }
    else return;
    
}
int main(){
    int N;
    double P=0,R=0;
    cin>>N>>P>>R;
    int members[N];
    for (int i=0;i<N;i++){
        cin>>members[i];
    }
    int maxtime=0;
    int time = 0;
    int tarry[N];
    for (int i=0;i<N;i++){
        findsppluy(members,i,&time);
        if(time >maxtime)
            maxtime = time;
        tarry[i]= time;
        time = 0;
    }
    int n=0;
    for (int i=0; i<N; i++) {
        if (maxtime==tarry[i]) {
            n++;
        }
    }
    printf("%.2f %d",P*pow(R/100+1, maxtime),n);
}
