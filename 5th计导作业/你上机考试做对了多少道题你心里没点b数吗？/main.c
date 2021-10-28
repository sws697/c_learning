//
//  main.c
//  你上机考试做对了多少道题你心里没点b数吗？
//
//  Created by 汪航 on 2021/10/28.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n=0,m=0;
    scanf("%d %d",&m,&n);//m是总人数，n是做对题数
    int a=0,x=0,y=0,z=0;
    for (x=0; x<=m; x++) {
        for (a=m; a>=0; a--) {
            y=4*m-n-3*a-2*x;
            z=2*a+x+n-3*m;
            if (y>=0&&z>=0) {
                printf("%d %d %d\n",x,y,z);
            }
        }
    }
    return 0;
}
