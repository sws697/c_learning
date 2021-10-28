//
//  main.c
//  同构数
//
//  Created by 汪航 on 2021/10/28.
//个位数除以10的商是0，余数是它自己

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x=0;
    scanf("%d",&x);
    if (x>=1&&x<=10000) {
        int d;//d为平方数
        d=x*x;
        int mask=1;
        int c=x;//c为容器
        c/=10;
        mask=10;
        while (c!=0) {
            c/=10;
            mask*=10;
        }
        int f=d%mask;
        if (f==x) {
            printf("Yes\n");
        }
        else printf("No\n");
    }
    else printf("%d out of range\n",x);
    return 0;
}
