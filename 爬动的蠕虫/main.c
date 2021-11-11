//
//  main.c
//  爬动的蠕虫
//
//  Created by 汪航 on 2021/11/8.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n=0,u=0,d=0;
    scanf("%d %d %d",&n,&u,&d);
    int total=0;
    int i=1;
    while (total<n) {
        if (i%2==1) {
            total=total+u;
        }
        else {
            total=total-d;
        }
        i++;
    }
    
    printf("%d",--i);
    return 0;
}
