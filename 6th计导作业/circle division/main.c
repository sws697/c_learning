//
//  main.c
//  circle division
//
//  Created by 汪航 on 2021/11/6.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n=0;
    scanf("%d",&n);
    int area=1;
    for (int i=1; i<=n; i++) {
        area+=i;
    }
    printf("%d",area);
    
    return 0;
}
