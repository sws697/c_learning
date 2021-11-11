//
//  main.c
//  验证哥德巴赫猜想
//
//  Created by 汪航 on 2021/11/4.
//

#include <stdio.h>
#include <math.h>
int isprime(int a)
{
    int isprime=1;
    for (int i=2; i<=sqrt(a); i++) {
        if (a%i==0) {
            isprime=0;
            break;
        }
    }
    return isprime;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int x=0;
    scanf("%d",&x);
    for (int i=1; i<x/2; i++) {
        if (isprime(i)&&isprime(x-i)) {
            printf("%d %d\n",i,x-i);
        }
    }
    return 0;
}
