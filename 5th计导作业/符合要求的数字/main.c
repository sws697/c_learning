//
//  main.c
//  符合要求的数字
//
//  Created by 汪航 on 2021/10/28.
//已知一个整数n，打印1到n所有除以m后所得商正好是它的各个数字平方和的数。

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n=0;
    int m=0;
    scanf("%d %d",&n,&m);
    int t=1;
    for (t=1; t<=n; t++) {
        int a=t/m;//a商，t是被除数
        int sum=0;
        int contain=0;
        int d=t;//d作为转接t的容器
        contain=d%10;
        sum=sum+contain*contain;
        d=d/10;
        while (d!=0) {
            contain=d%10;
            sum=sum+contain*contain;
            d=d/10;
        }
        if (sum==a) {
            printf("%d\n",t);
        }
    }
    return 0;
}
