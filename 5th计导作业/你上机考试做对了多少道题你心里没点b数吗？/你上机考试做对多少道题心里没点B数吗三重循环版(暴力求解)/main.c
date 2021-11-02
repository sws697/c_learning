//
//  main.c
//  你上机考试做对多少道题心里没点B数吗三重循环版
//
//  Created by 汪航 on 2021/10/30.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x1=0,x2=0,x3=0,x4=0;
    int m=0,n=0;
    scanf("%d %d",&m,&n);
    for (x2=0; x2<=m; x2++) {
        for (x3=0; x3<=m; x3++) {
            for (x1=0; x1<=m; x1++) {
                x4=m-x1-x2-x3;
                if (x1+2*x2+3*x3+4*x4==n&&x4>=0) {
                    printf("%d %d %d\n",x2,x3,x4);
                }
            }
        }
    }
    return 0;
}
