#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,cnt=0,maxcnt=0,num;
    cin>>n;
    int temp = 1;
    for(int i = 2;i<sqrt(n);i++){
        int j =i;
        while(n%temp==0){
           if(cnt>maxcnt){
               maxcnt = cnt;
               num = j;
            }
           j++;
           temp = temp*j;
           cnt++;
        }     
           cnt  =0;
           temp =1;
    
    }
    if(maxcnt == 0){
        cout<<1<<endl<<n;
    }

    else{
    cout<<maxcnt<<endl;
    for(int i =0;i<maxcnt;i++){
        if(i!=maxcnt-1)
            cout<<num-(maxcnt-i-1)<<"*";
        else
            cout<<num-(maxcnt-i-1);
    }
    }
}


