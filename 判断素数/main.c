//
//  main.c
//  判断素数
//
//  Created by 汪航 on 2021/11/3.
//这里用了一种新算法构建素数表

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=0;
    scanf("%d",&a);
    const int number=a;
    int isprime[number];
    for (int i=0; i<number; i++) {
        isprime[i]=1;
    }
    for (int i=2; i<number; i++) {
        if (isprime[i]) {
            for (int x=2; x*i<number; x++) {
                isprime[x*i]=0;
            }
        }
    }
    int x=0;
    scanf("%d",&x);
    int isprime1=1;
    for (int i=2; i<number; i++) {
        if (isprime[i]==1) {
            if (x%i==0) {
                isprime1=0;
            }
        }
       
    }
    if (isprime1==0) {
        printf("not prime");
    }
    else printf("is prime");
    return 0;
}
