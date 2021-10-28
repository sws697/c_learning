//
//  main.c
//  辗转相除求最大公约数
//
//  Created by 汪航 on 2021/10/28.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x=0;
    scanf("%d",&x);
    int y=0;
    scanf("%d",&y);
    int mod=0;
    mod=x%y;
    while (mod!=0) {
        x=y;
        y=mod;
        mod=x%y;
    }
    printf("%d",y);
    return 0;
}
