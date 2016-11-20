//
//  1002.c
//  pat
//
//  Created by Wenhao Zhang on 5/11/2016.
//  Copyright © 2016 Wenhao Zhang. All rights reserved.
//

#include <stdio.h>
int testa1(int *n,int l,int a[]){
    int isRight = 0;
    for (int i = 0; i < l; ++i)
    {
        /* code */
        
        if (a[i]%5==0&&a[i]%2==0)
        {
            *n+=a[i];
            isRight = 1;
            /* code */
        }

    }
    return isRight;
    
}

int testa2(int *n,int l,int a[]){
    int isRight =0;
    int sum = 0;
    int s = 1;
    for (int i = 0; i < l; ++i)
    {
        /* code */
        if (a[i]%5==1)
        {
            isRight = 1;
            if (s)
            {
                sum+=a[i];
                s=0;
            }
            else{
                sum-=a[i];
                s = 1;
            }
            /* code */
        }
        
    }
    *n = sum;
    return  isRight;
}

int testa3(int *n,int l,int a[]){
    int isRight =0;
    int sum = 0;
    for (int i = 0; i < l; ++i)
    {
        /* code */
        
        if (a[i]%5==2)
        {
            isRight = 1;
            sum++;
            /* code */
        }
        
    }
    *n = sum;
    return isRight;
}

int testa4(double *n,int l,int a[]){
    int isRight = 0;
    double sum = 0;
    int cnt = 0;
    for (int i = 0; i < l; ++i)
    {
        /* code */
        if (a[i]%5==3)
        {
            isRight = 1;
            sum+=a[i];
            cnt++;
            /* code */
        }
    }
    *n = sum/cnt;
    return isRight;
}

int testa5(int *n,int l,int a[]){
    int isRight = 0;
    int sum = 0;
    for (int i = 0; i < l; ++i)
    {
        /* code */
        if (a[i]%5==4)
        {
            isRight = 1;
            if (a[i]>sum)
            {
                /* code */
                sum=a[i];
            }
            /* code */
        }
        
    }
    *n = sum;
    return isRight;
}

int main() {
    int T;
    int a1,a2,a3,a5;
    double a4;
    scanf("%d",&T);
    int array[T];
    for (int i=0; i<T; i++) {
        scanf("%d",&array[i]);
    }
    if(testa1(&a1,T,array))
        printf("%d ", a1);
    else
        printf("N ");
        /* code */
   
    if (testa2(&a2,T,array))
    {
        /* code */
        printf("%d ",a2);
    }
    else{
        printf("N ");
    }
    
    if (testa3(&a3,T,array))
    {
        printf("%d ",a3);
    }
    
    else{
        printf("N ");
    }
    
    if (testa4(&a4,T,array))
    {
        printf("%.1f ",a4);
    }
    
    else{
        printf("N ");
    }
    
    if (testa5(&a5,T,array))
    {
        printf("%d",a5);
    }
    
    else{
        printf("N");
    }
    
    
    return 0;
}



