#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
    char s1[1000];
    unsigned char EX[1000]={0x00};
    char s2[1000];

    gets(s1);
    gets(s2);

    for(int i =0;i<strlen(s2) ;i++){
        EX[s2[i]]=1;
    }
    for(int i =0;i<strlen(s1);i++){
        if(EX[s1[i]]==0x00)
            cout << s1[i];
    }
    return 0;



}

