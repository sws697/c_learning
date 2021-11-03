//
//  main.c
//  求N！
//
//  Created by 汪航 on 2021/11/2.
//

#include <stdio.h>
long factorial(long n)
{
    long t;
    if (n==1) {
        t=1;
    }
    else
    {
        t=n*factorial(n-1);
    }
    return t;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("%ld",factorial(7));
    return 0;
}
