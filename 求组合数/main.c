//
//  main.c
//  求组合数
//
//  Created by 汪航 on 2021/11/9.
//

#include <stdio.h>
#include <math.h>
double fact(int n)
{
    double result=0;
    if (n==1) {
        result=1;
    }
    else
    result=n*fact(n-1);
    return result;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    int m=0,n=0;
    scanf("%d %d",&m,&n);
    double result=0;
    result=fact(n)/(fact(m)*fact(n-m));
    printf("%d",(int)result);
    return 0;
}
