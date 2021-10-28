//
//  main.c
//  求数字位数
//
//  Created by 汪航 on 2021/10/28.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int x=0;
    scanf("%d",&x);
    int count=0;
    x=x/20;
    count=1;
    while (x!=0) {
        x=x/10;
        count++;
    }
    printf("%d",count);
    return 0;
}
