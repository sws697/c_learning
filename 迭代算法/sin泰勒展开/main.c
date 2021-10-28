//
//  main.c
//  sin泰勒展开
//
//  Created by 汪航 on 2021/10/28.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    // insert code here...
    double x=0;
    scanf("%lf",&x);
    double p=0;
    p=x;
    double sum=0;
    int i=1;
    int base=1;
    while (fabs(p)>=1e-6) {
        sum=sum+p;
        ++i;
        base=(2*i-1)*(2*i-2);
        p=(-1)*p*x*x/base;
    }
    printf("%lf",sum);
    return 0;
}
