#include <stdio.h>

int main(){
    for(int i = 2;i < 100;i++){
        for(int j=2;j<i;j++){
            if(j%i==0)
                break;

        }
    }
}
