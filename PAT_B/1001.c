#include <stdio.h>

int main() {
    int T;
    scanf("%d",&T);
    int array[T];
    for (int i=0; i<T; i++) {
        double a,b,c;
        
        scanf("%lf %lf %lf",&a,&b,&c);
        
        if ((a+b)>c) {
            array[i] = 1;
        }else{
            array[i] = 0;
        }
    }
    
    for (int i=0; i<T; i++) {
        
        if (array[i]) {
            printf("Case #%d: true\n",i+1);
        }else{
            printf("Case #%d: false\n",i+1);
        }
    }
    
    return 0;
}
