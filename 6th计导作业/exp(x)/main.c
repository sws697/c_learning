//
//  main.c
//  exp(x)
//
//  Created by 汪航 on 2021/11/6.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    double en=1;
    double x=0;
    scanf("%lf",&x);
    int i=1;
    double sign=1;
    while (fabs(sign)>=1e-8) {
        sign=sign*x/i;//防止溢出
        en+=sign;
        i++;
    }
    printf("%.4lf",en);
    return 0;
}
