#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    int temp = -1;
    int num =0;
    for(int i=0;i<str.length();i++){
        
        if(temp!=str[i]){
            if (num) {
                cout<<":"<<num<<endl;
                num=0;
            }
            cout<<str[i];
            temp = str[i];
            num++;
        }
        else
            num++;
    }
    cout<<":"<<num<<endl;
}
