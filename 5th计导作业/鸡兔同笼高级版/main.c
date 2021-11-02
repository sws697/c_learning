//
//  main.c
//  鸡兔同笼高级版
//
//  Created by 汪航 on 2021/10/28.
//鸡有一个头两条腿，兔子有一个头4条腿，蜻蜓有一个头6条腿。没有例外。一个笼子里共有m个头，n条腿，问鸡、兔和蜻蜓各有多少？

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n=0,m=0;
    scanf("%d %d",&m,&n);//m是头，n是脚
    int x=0,y=0,z=0;
    for (z=0; z<=m; z++) {
        x=2*m+z-n/2;
        y=n/2-m-2*z;
        if (x>=0&&y>=0&&z>=0) {
            printf("%d %d %d\n",x,y,z);
        }
    }
    return 0;
}
