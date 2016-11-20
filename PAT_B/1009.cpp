#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
    string str;
    cin>>str;
    int f,n,m;
    int length;
    while (f!=6174) {
        while (str.size()<4) {
            str += '0';
        }
        length =(int)str.size();
        sort(str.begin(),str.end());
        n = stoi(str);
        reverse(str.begin(), str.end());
        m = stoi(str);
        f =m - n;
        if (f==0) {
            cout<<setw(4)<<setfill('0')<<m<<" - "<<setw(4)<<setfill('0')<<n<<" = "<<setw(4)<<setfill('0')<<f;
            break;
        }
        str = to_string(f);
        cout<<setw(4)<<setfill('0')<<m<<" - "<<setw(4)<<setfill('0')<<n<<" = "<<setw(4)<<setfill('0')<<f;
        if (f!=6174) {
            cout<<endl;
        }
    }
    
    return 0;
}


